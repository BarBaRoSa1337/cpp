#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("gate Guard", 145, 137)
{
    _target = "Default Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ)
    : AForm("Shrubbery Form", 145, 137)
{
    _target = targ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
    this->_target = copy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::ft_exec()
{
    std::ofstream MyFile(_target+"_shrubbery");

    if (MyFile.is_open()) {

        MyFile << "    oxoxoo    ooxoo\n";
        MyFile << "  ooxoxo oo  oxoxooo\n";
        MyFile << " oooo xxoxoo ooo ooox\n";
        MyFile << " oxo o oxoxo  xoxxoxo\n";
        MyFile << "  oxo xooxoooo o ooo\n";
        MyFile << "    ooo\\oo\\  /o/o\n";
        MyFile << "        \\  \\/ /\n";
        MyFile << "         |   /\n";
        MyFile << "         |  |\n";
        MyFile << "         | D|\n";
        MyFile << "         |  |\n";
        MyFile << "         |  |\n";
        MyFile << "  ______/____\\____\n";
        MyFile << " Christopher S McDowell\n";
    
    }
    MyFile.close();
}
