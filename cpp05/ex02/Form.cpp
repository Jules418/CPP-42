#include "Form.hpp"

Form::Form() : _name("DEFAULT"), _been_signed(false), _min_grade_sign(150), _min_grade_exec(150) {}
Form::~Form() {}

Form::Form(const Form& f) :  _name(f.getName()), 
								_been_signed(f.getSignedStatus()), 
								_min_grade_sign(f.getMinGradeToSign()), 
								_min_grade_exec(f.getMinGradeToExec()) {}

Form& Form::operator=(const Form& f) {
	//nothing to do here
	if (this==&f)
		return *this;
	return *this;
}

Form::Form(const std::string name, const int min_sign, const int min_exec) : 
								_name(name),
								_been_signed(false),
								_min_grade_sign(min_sign),
								_min_grade_exec(min_exec) 
{
	if ((min_sign < 1) || (min_exec < 1))
		throw Form::GradeTooHighException();
	if ((min_sign > 150) || (min_exec > 150))
		throw Form::GradeTooLowException();
}

std::string Form::getName() const {
	return _name;
}

bool Form::getSignedStatus() const {
	return _been_signed;
}

int Form::getMinGradeToSign() const {
	return _min_grade_sign;
}

int Form::getMinGradeToExec() const {
	return _min_grade_exec;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > _min_grade_sign)
		throw Form::GradeTooLowException();
	_been_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form& f) {
	os << "The " << f.getName() << " form needs a grade ";
	os << f.getMinGradeToSign() << " to be signed and a grade ";
	os << f.getMinGradeToExec() << " to be executed." << std::endl;
	os << "The form has ";
	if (!f.getSignedStatus())
		os << "not ";
	os << "been signed.";
	return os;
}