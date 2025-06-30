#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("DEFAULT"), _grade(150) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

const std::string Bureaucrat::getName() const {
	return (_name);
}

void Bureaucrat::incrementGrade() {
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &f) {
	if (f.getSignedStatus())
		return;
	try {
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name;
		std::cout << " couldn't sign " << f.getName();
		std::cout << " because " << e.what();
		std::cout << "." << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()), _grade(other.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return *this;
	_grade = other.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat& b) {
	os << b.getName();
	os << ", bureaucrate grade ";
	os << b.getGrade();
	os << ".";
	return os;
}
