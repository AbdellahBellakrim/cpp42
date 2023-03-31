/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:33:48 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 02:01:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

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
#endif
