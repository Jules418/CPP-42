/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:28:58 by jbanacze          #+#    #+#             */
/*   Updated: 2024/06/09 11:34:16 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria {
	protected:
		AMateria();
		std::string _type;

	public:
		AMateria(std::string const &type);
		
		virtual ~AMateria();
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria&);

		std::string const &getType(void) const;

		virtual void use(ICharacter& target);
		
};


#endif