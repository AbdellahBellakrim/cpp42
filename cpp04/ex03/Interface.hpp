/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:29:28 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 03:13:11 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <iostream>

/////////////////////////////////////////
///// Abstract class Amateria
///////////////////////////////////////
class AMateria
{
    protected:
        std::string Type;
    public:
        AMateria(std::string const & type); // parameter constructor
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0; // override darori !!!!!!!!!!!!!!!!!!!!!!!
        virtual void use(ICharacter& target);// override machi darori walkin momkin n overidi
};

/////////////////////////////////////////
///// Ice class
///////////////////////////////////////
class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& newObj);
        Ice& operator=(const Ice& newObj);

        AMateria* clone() const;
        void use(ICharacter& target);
};
/////////////////////////////////////////
///// Cure class
///////////////////////////////////////
class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& newObj);
        Cure& operator=(const Cure& newObj);

        AMateria* clone() const;
        void use(ICharacter& target);
};

/////////////////////////////////////////
///// Character Interface
///////////////////////////////////////
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
#endif