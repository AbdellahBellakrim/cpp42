/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 03:17:56 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 15:18:50 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(const MateriaSource& newObj);
        MateriaSource& operator=(const MateriaSource& newObj);

        // overload
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria *MateriasClone[4];

};

#endif