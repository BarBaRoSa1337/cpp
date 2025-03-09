#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    time_t      timestamp = time(NULL);
    struct tm   *date = localtime(&timestamp);
    char        output[20];
    strftime(output, 20, "[%Y%m%d_%H%M%S] ", date);
    std::cout << output;
}

Account::Account( void )
{
    _accountIndex = _nbAccounts;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _amount = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";created\n";
    _nbAccounts++;
}

Account::Account( int initial_deposit )
{
    if (initial_deposit > -1)
    {
        _totalAmount += initial_deposit;
        _accountIndex = _nbAccounts;
        _amount = initial_deposit;
        _nbAccounts++;
        _nbDeposits = 0;
        _nbWithdrawals = 0;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";created\n";
    }
}

int Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int Account::getTotalAmount( void ){
    return (_totalAmount);
}

int Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout <<  "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << 
        ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << '\n';
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << getTotalAmount() << ";deposits:"
        << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << '\n';
}

int Account::checkAmount( void ) const {
    return (_amount);
}

void    Account::makeDeposit( int deposit ) {

    if (deposit > 0) {
        _totalAmount += deposit;
        _totalNbDeposits ++;
        _amount += deposit;
        _nbDeposits ++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount" << _amount - deposit << ";deposit:" << deposit << 
            ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << '\n';
    }
}

bool    Account::makeWithdrawal( int withdrawal ) {

    if (withdrawal > 0 && withdrawal <= _amount) {

        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal 
            << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << '\n';
        return (true);
    }
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
    return (false);
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";closed" << std::endl;
}
