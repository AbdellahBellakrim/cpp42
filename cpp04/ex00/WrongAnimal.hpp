/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:54:00 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/28 21:58:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal{
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& newObj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        std::string getType() const;

        void makeVoice() const;    

    protected:
        std::string type;
};

#endif