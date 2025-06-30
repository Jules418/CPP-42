#include "AForm.hpp"

AForm::AForm() : _name("DEFAULT"), _been_signed(false), _min_grade_sign(150), _min_grade_exec(150) {}
AForm::~AForm() {}

AForm::AForm(const AForm& f) :  _name(f.getName()), 
								_been_signed(f.getSignedStatus()), 
								_min_grade_sign(f.getMinGradeToSign()), 
								_min_grade_exec(f.getMinGradeToExec()) {}

AForm& AForm::operator=(const AForm& f) {
	//nothing to do here
	if (this==&f)
		return *this;
	return *this;
}

AForm::AForm(const std::string name, const int min_sign, const int min_exec) : 
								_name(name),
								_been_signed(false),
								_min_grade_sign(min_sign),
								_min_grade_exec(min_exec) 
{
	if ((min_sign < 1) || (min_exec < 1))
		throw AForm::GradeTooHighException();
	if ((min_sign > 150) || (min_exec > 150))
		throw AForm::GradeTooLowException();
}

std::string AForm::getName() const {
	return _name;
}

bool AForm::getSignedStatus() const {
	return _been_signed;
}

int AForm::getMinGradeToSign() const {
	return _min_grade_sign;
}

int AForm::getMinGradeToExec() const {
	return _min_grade_exec;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
	return "Form not signed";
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > _min_grade_sign)
		throw AForm::GradeTooLowException();
	_been_signed = true;
}

void AForm::execute(const Bureaucrat& executor) const {
    if (!this->getSignedStatus())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getMinGradeToExec())
        throw AForm::GradeTooLowException();

    this->concreteExecute();
}

std::ostream &operator<<(std::ostream &os, const AForm& f) {
	os << "The " << f.getName() << " form needs a grade ";
	os << f.getMinGradeToSign() << " to be signed and a grade ";
	os << f.getMinGradeToExec() << " to be executed." << std::endl;
	os << "The form has ";
	if (!f.getSignedStatus())
		os << "not ";
	os << "been signed.";
	return os;
}