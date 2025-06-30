/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:38:46 by jbanacze          #+#    #+#             */
/*   Updated: 2024/09/19 02:15:01 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <exception>
# include <string>
# include <iostream>

class AForm;

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;

	public:
		Bureaucrat();
		~Bureaucrat();

		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat&operator=(const Bureaucrat&);

		const std::string getName() const ;
		int getGrade() const ;

		void incrementGrade();
		void decrementGrade();

		void signForm(AForm &f);
		void executeForm(const AForm &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat& b);

#endif