#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	{	
		Bureaucrat *a = new Bureaucrat("Malfrat", 145);
		Bureaucrat *b = new Bureaucrat("Boss", 1);
		Form *c = new Form("Crime certificate", 140, 100);

		std::cout << *a;
		std::cout << std::endl;
		std::cout << *b;
		std::cout << std::endl;
		std::cout << *c;
		std::cout << std::endl;

		a->signForm(*c);
		
		std::cout << *c;
		std::cout << std::endl;
		c->beSigned(*b);

		std::cout << *c;
		std::cout << std::endl;

		// try signing the from again
		b->signForm(*c);

		delete a;
		delete b;
		delete c;
	}

	Form *a = NULL;

	// sign too high
	try
	{
		a = new Form("Form", 160, 145);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// exec too high
	try
	{
		a = new Form("Form", 145, 160);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// sign  too low
	try
	{
		a = new Form("Form", -15, 145);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// exec too low
	try
	{
		a = new Form("Form", 145, -15);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	// just in case
	if (a != NULL)
	{
		std::cout << std::endl;
		delete a;
	}


	return (0);
}