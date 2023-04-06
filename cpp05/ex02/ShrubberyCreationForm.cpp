/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:04:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 18:47:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationFormName", false , 145, 137)
{
    Target = "noTarget";
    std::cout << "ShrubberyCreationForm Default constractor called" << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default destractor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& newObj) : AForm(newObj.getName(), newObj.getSigned(), newObj.getGradeTosign(), newObj.getGradeToexecute())
{
    *this = newObj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& newObj)
{
    Target = newObj.Target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationFormName", false , 145, 137)
{
    Target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getSigned() == true && executor.getGrade() <= this->getGradeToexecute())
    {
        std::string filename = Target + "_shrubbery";
        std::ofstream filestream(filename);
          if (filestream.is_open())  	
          {  
            filestream << "           ___\n"
                "                _,-'\"\"   \"\"\"\"`--.\n"
                "             ,-'          __,,-- \\\n"
                "           ,'    __,--\"\"\"\"dF      )\n"
                "          /   .-\"Hb_,--\"\"dF      /\n"
                "        ,'       _Hb ___dF\"-. ,-' \n"
                "      ,'      _,-\"\"\"\"   \"\"--..__\n"
                "     (     ,-\'                  `.\n"
                "      `._,'     _   _             ;\n"
                "       ,'     ,' `-'Hb-.___..._,-'\n"
                "       \\    ,\"\"Hb.-\'HH`-.dHF\"\n"
                "        `--\'   \"Hb  HH  dF\"\n"
                "                \"Hb HH dF\n"
                "                 \"HbHHdF\n"
                "                  |HHHF\n"
                "                  |HHH|\n"
                "                  |HHH|\n"
                "                  |HHH|\n"
                "                  |HHH|\n"
                "                  dHHHb\n"
                "                .dFd|bHb.               o\n"
                "      o       .dHFdH|HbTHb.          o /\n"
                "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
                "##########################################\n" << std::endl;  
            filestream.close();  
          }  
          else
             std::cout <<"No Such File created." << std::endl;        
    }
    else
        throw GradeTooLowException();
}
































