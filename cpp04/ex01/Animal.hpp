/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:46:20 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 22:59:12 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal&);
		Animal&operator=(const Animal&);

		std::string &getType(void);

		std::string getType(void) const ;
		virtual void makeSound(void) const ;
};

#endif