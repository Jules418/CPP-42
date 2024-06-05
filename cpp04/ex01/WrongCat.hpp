/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:40:23 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:47:52 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCat_HPP
# define WRONGCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat&);
		WrongCat&operator=(const WrongCat&);

		void makeSound(void) const ;
};

#endif