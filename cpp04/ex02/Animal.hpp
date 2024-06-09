/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:46:20 by jules             #+#    #+#             */
/*   Updated: 2024/06/09 11:16:55 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string _type;
		Animal();

	public:
		virtual ~Animal();
		Animal(const Animal&);
		Animal&operator=(const Animal&);

		std::string &getType(void);

		std::string getType(void) const ;
		virtual void makeSound(void) const ;
};

#endif