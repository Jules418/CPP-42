#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	{	
		Bureaucrat *a = new Bureaucrat("Malfrat", 145);
		Bureaucrat *b = new Bureaucrat("Boss", 1);
		Form *c = new Form("Contrat de crime", 140, 100);

		std::cout << *a;
		std::cout << *b;
		std::cout << *c;

		a->signForm(*c);
		
		std::cout << *c;
		c->beSigned(*b);

		std::cout << *c;

		// try signing the from again
		b->signForm(*c);

		delete a;
		delete b;
		delete c;
	}

	Form *a = NULL;

	// sign-grade too high
	try
	{
		a = new Form("Form", 160, 145);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// exec-grade too high
	try
	{
		a = new Form("Form", 145, 160);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// sign-grade too low
	try
	{
		a = new Form("Form", -15, 145);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// exec-grade too low
	try
	{
		a = new Form("Form", 145, -15);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// Deconstruction to prevent unused variable, in this case will never be called
	if (a != NULL)
	{
		std::cout << std::endl;
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
	}


	return (0);
}