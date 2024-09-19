#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <exception>
# include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _been_signed;
		const int _min_grade_sign;
		const int _min_grade_exec;

	public:
		Form();
		~Form();
		Form(const Form&);
		Form&operator=(const Form&);

		Form(const std::string name, const int min_sign, const int min_exec);

		std::string getName() const ;
		bool getSignedStatus() const ;
		int getMinGradeToSign() const ;
		int getMinGradeToExec() const ;

		void beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form& f);

#endif