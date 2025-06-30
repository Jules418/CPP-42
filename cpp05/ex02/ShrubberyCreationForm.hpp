#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
private:
    std::string target;

protected:
    void concreteExecute() const;

public:
    ShrubberyCreationForm(const std::string& target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
};

#endif
