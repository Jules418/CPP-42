/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:27:20 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 06:47:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWSED_HPP
# define NEWSED_HPP

#include <iostream>
#include <fstream>

class NewSed {
	public:
		NewSed();
		~NewSed();
		NewSed(const NewSed&);
		NewSed&operator=(const NewSed&);

		NewSed(std::string infile);
		
		int	replace(std::string s1, std::string s2);
	
	private:
		std::string _infile;
		std::string	_outfile;
	
};

#endif