/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:36:18 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:45:50 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAnimal_HPP
# define WRONGAnimal_HPP

# include <string>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal&operator=(const WrongAnimal&);

		std::string &getType(void);

		std::string getType(void) const ;
		virtual void makeSound(void) const ;
};

#endif