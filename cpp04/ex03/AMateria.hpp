/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:32:39 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 02:40:08 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter ;
/////////////////////////////////////////
///// Abstract class Amateria
///////////////////////////////////////
class AMateria
{
    protected:
        std::string Type;
    public:
        AMateria();
        ~AMateria(); 
        AMateria(const AMateria & newObj);
        AMateria& operator=(const AMateria& newObj);

        AMateria(std::string const & type);


        
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif



