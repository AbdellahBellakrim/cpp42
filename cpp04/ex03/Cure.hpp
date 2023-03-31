/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:29:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 23:33:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"


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
#endif