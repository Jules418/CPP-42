#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <exception>
# include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool _been_signed;
		const int _min_grade_sign;
		const int _min_grade_exec;

	protected:
		virtual void concreteExecute() const = 0;

	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm&);
		AForm&operator=(const AForm&);

		AForm(const std::string name, const int min_sign, const int min_exec);

		std::string getName() const ;
		bool getSignedStatus() const ;
		int getMinGradeToSign() const ;
		int getMinGradeToExec() const ;

		void beSigned(Bureaucrat &b);
		void execute(const Bureaucrat &executor) const ;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm& f);

#endif