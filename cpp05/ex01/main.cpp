/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/05 18:25:52 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

void _main()
{
    ////////////////////////////////////////
    //// test from ex00
    ///////////////////////////////////////
    // Bureaucrat *ptr1 = new Bureaucrat();
    // Bureaucrat *ptr2 = NULL;
    // std::cout << *ptr1 << std::endl;   
    // delete ptr1;
    
    // try
    // {
    //     ptr2 = new Bureaucrat("abdellah", 4);
    //     std::cout << *ptr2 << std::endl;   
    //     ptr2->decrementGrade();
    //     std::cout << *ptr2 << std::endl;   
    //     delete ptr2;
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    /////////////////////////////////////
    //// test from ex01
    ////////////////////////////////////
    Bureaucrat *Abdellah = NULL;
    Form *AbdellahForm = NULL;
    try{
            Abdellah = new Bureaucrat("abdellah", 144);
            AbdellahForm = new Form("FormatAbdellah", false, 20, 10);
            std::cout << *Abdellah << std::endl;
            std::cout << "--------------------------------------------------------------------------------Form before signing : " << std::endl;
            std::cout << *AbdellahForm << std::endl;
            try{
                AbdellahForm->beSigned(*Abdellah);
                
            }
            catch(std::exception &e)
            {
                std::cerr << e.what() << std::endl;
            }
            std::cout << "---------------------------------------------------------------------------------Form after signing : " << std::endl;
            std::cout << *AbdellahForm << std::endl;
            std::cout << "---------------------------------------------------------------------------------signform info : " << std::endl;
            Abdellah->SignForm(*AbdellahForm);

        delete Abdellah;
        delete AbdellahForm;
        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

}

int main()
{
    _main();
    // system("leaks a.out");
}