#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"

int main() {
	Intern RandomIntern;

	AForm *form1 = RandomIntern.makeForm("shrubbery creation", "forest");
	AForm *form2 = RandomIntern.makeForm("robotomy request", "Bender");
	AForm *form3 = RandomIntern.makeForm("presidential pardon", "Zlatan");
	AForm *form4 = RandomIntern.makeForm("Complete Non-sense", "glpstkf");

	delete form1;
	delete form2;
	delete form3;
	delete form4;
}