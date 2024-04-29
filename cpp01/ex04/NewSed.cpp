/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:30:47 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:45:22 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

NewSed::NewSed() {}

NewSed::~NewSed() {}

NewSed::NewSed(const NewSed &ns) {
	*this = ns;
}

NewSed	&NewSed::operator=(const NewSed &ns) {
	if (this == &ns)
		return (*this);
	this->_infile = ns._infile;
	this->_outfile = ns._outfile;
	return (*this);
}

NewSed::NewSed(std::string infile) {
	this->_infile = infile;
	this->_outfile = infile + ".replace";
}

int	NewSed::replace(std::string s1, std::string s2) {
	std::ifstream   ifs;
	ifs.open(_infile.c_str());
	if (!ifs.is_open()) {
		std::cerr << "Unable to open the infile." << std::endl;
		return 1;
	}

	std::ofstream	ofs;
	ofs.open(_outfile.c_str());
	if (!ofs) {
		std::cerr << "Unable to open the outfile." << std::endl;
		return 1;
	}

	std::string content;
	std::getline(ifs, content, '\0');

	size_t	next_pos = content.find(s1);
	while ( next_pos < std::string::npos ) {
		content.erase(next_pos, s1.length());
		content.insert(next_pos, s2);
		next_pos = content.find(s1);
	}
	ofs << content;
	ofs.close();
	ifs.close();

	return 0;
}
