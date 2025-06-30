#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm {
private:
    std::string target;

protected:
    void concreteExecute() const;

public:
    RobotomyRequestForm(const std::string& target);
    ~RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
};

#endif
