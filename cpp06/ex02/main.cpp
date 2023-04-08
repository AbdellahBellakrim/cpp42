/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:48:11 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 21:15:04 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"


Base * generate(void)
{
    Base *ptr = NULL;

    
    std::srand(std::time(nullptr));
    int random_variable = std::rand() % 3;

    if(random_variable == 0)
        ptr =  new A();
    else if(random_variable == 1)
        ptr = new B();
    else
        ptr = new C();
    return ptr;
}

void identify(Base* p)
{
    A *ptr1 = dynamic_cast <A*> (p);
    if(ptr1 != NULL)
        std::cout << "the actual type of the object pointed to by p : 'A' " << std::endl;
    B *ptr2 = dynamic_cast <B*> (p);
    if(ptr2 != NULL)
        std::cout << "the actual type of the object pointed to by p : 'B' " << std::endl;
    C *ptr3 = dynamic_cast <C*> (p);
    if(ptr3 != NULL)
        std::cout << "the actual type of the object pointed to by p : 'C' " << std::endl;


    
}

void identify(Base& p)
{
    try{
        A& ptr1 = dynamic_cast <A&> (p);
        std::cout << "the actual type of the object pointed to by p : 'A' " << std::endl;
        (void)ptr1;
        
    }
    catch(std::exception &e)
    {
        
    }
    

    try{
        B& ptr2 = dynamic_cast <B&> (p);
        std::cout << "the actual type of the object pointed to by p : 'B' " << std::endl;
        (void)ptr2;
        
    }
    catch(std::exception &e)
    {
        
    }


    try{
        C& ptr3 = dynamic_cast <C&> (p);
        std::cout << "the actual type of the object pointed to by p : 'C' " << std::endl;
        (void)ptr3;
    }
    catch(std::exception &e)
    {
        
    }
}


int main()
{
    Base* ptr = generate();
    Base &ref = *ptr;
    std::cout << "identify by PTR" << std::endl;
    identify(ptr);
    std::cout << "identify by REF" << std::endl;
    identify(ref);

    delete ptr;
    return 0;
}
