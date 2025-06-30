#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat Bob("Bob", 1);
	Bureaucrat Alice("Alice", 50);
	Bureaucrat Marc("Marc", 149);
	
	ShrubberyCreationForm ShrubForm("tartiflette");
	RobotomyRequestForm RobotForm("pinata");
	PresidentialPardonForm PresPardon("Frank Leboeuf");

	Marc.signForm(PresPardon);
	Marc.signForm(RobotForm);
	Marc.signForm(ShrubForm);
	
	Alice.signForm(PresPardon);
	Alice.signForm(RobotForm);
	Alice.signForm(ShrubForm);

	Bob.signForm(PresPardon);
	Bob.signForm(RobotForm);
	Bob.signForm(ShrubForm);

	Marc.executeForm(PresPardon);
	Marc.executeForm(RobotForm);
	Marc.executeForm(ShrubForm);
	
	Alice.executeForm(PresPardon);
	Alice.executeForm(RobotForm);
	Alice.executeForm(ShrubForm);

	Bob.executeForm(PresPardon);
	Bob.executeForm(RobotForm);
	Bob.executeForm(ShrubForm);


	return 0;
}