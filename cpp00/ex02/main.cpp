
#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit ){
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

int Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int Account::getTotalAmount( void ){
    return (_totalAmount);
}

int Account::getNbDeposits( void ){
    return (_nbDeposits);
}

int Account::getNbWithdrawals( void ){
    return (_nbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    std::cou << "accounts:" << _nbAccounts << "total:" << _totalAmount
}