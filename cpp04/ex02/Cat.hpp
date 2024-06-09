/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:09 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 22:48:44 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *_brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat&);
		Cat&operator=(const Cat&);

		void makeSound(void) const ;
};

#endif