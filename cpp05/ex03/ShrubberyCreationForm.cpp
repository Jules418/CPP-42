#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) 
	{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void ShrubberyCreationForm::concreteExecute() const
{
    std::ofstream outfile((target + "_shrubbery").c_str());
    if (outfile.fail()) {
        std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
        return;
    }

    outfile << "       _-_         " << std::endl;
    outfile << "    /~~   ~~\\     " << std::endl;
    outfile << " /~~         ~~\\ " << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  / " << std::endl;
    outfile << "   ~  \\\\ //  ~  " << std::endl;
    outfile << "      | |       " << std::endl;
    outfile << "     // \\\\     " << std::endl;

	outfile << std::endl << std::endl;

    outfile << "       _-_         " << std::endl;
    outfile << "    /~~   ~~\\     " << std::endl;
    outfile << " /~~         ~~\\ " << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  / " << std::endl;
    outfile << "   ~  \\\\ //  ~  " << std::endl;
    outfile << "      | |       " << std::endl;
    outfile << "     // \\\\     " << std::endl;

    outfile.close();
}
