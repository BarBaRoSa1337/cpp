#include "AForm.hpp"

AForm::AForm() : _name("gate guard"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : 
    _name(copy._name), 
    _isSigned(copy._isSigned), 
    _gradeToSign(copy._gradeToSign), 
    _gradeToExecute(copy._gradeToExecute) 
{
}

AForm &AForm::operator=(const AForm &copy)
{
    if (this != &copy)
    {
    }
    return *this;
}

AForm::~AForm()
{
}

const std::string &AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}


const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char *AForm::NotSignedException::what() const throw()
{
    return "Form is not signed!";
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw NotSignedException();
    else if (executor.getGrade() > _gradeToExecute)
        throw GradeTooLowException();
    ft_exec();
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &Aform)
{
    os << "AForm: " << Aform.getName() << ", Signed: " << (Aform.getIsSigned() ? "Yes" : "No")
       << ", Grade to sign: " << Aform.getGradeToSign()
       << ", Grade to execute: " << Aform.getGradeToExecute();
    return os;
}