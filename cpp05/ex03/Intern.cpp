#include "Intern.hpp"
#include <stdlib.h>

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

static AForm *createShrubberyForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

static AForm *createRobotomyForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

static AForm *createPersidentialForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	static const std::string names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	t_func creators[3] = {
		createShrubberyForm,
		createRobotomyForm,
		createPersidentialForm
	};
	
	for (int i = 0; i < 3; ++i) {
		if (formName == names[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);
		}
	}
	std::cout << "Intern cannot create \"" << formName << "\"" << std::endl;
	return NULL;
}
