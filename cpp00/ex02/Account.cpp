/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:36:02 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/19 23:18:36 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//------------------------- 1 ok
Account::Account(int initial_deposit)
{
    std::cout << "[";
    // time function
    std::cout << "] ";
    this->_accountIndex = Account::_nbAccounts;
    std::cout << "index:" << this->_accountIndex << ";amount:"<< initial_deposit << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}
//-------------------------------- 2 , 5 , 8 ok
void Account::displayAccountsInfos( void )
{
     std::cout << "[";
    // std::cout << get_timestamp();
    std::cout << "] ";
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
//---------------------------- 3 , 6 , 9 ok
void	Account::displayStatus( void ) const
{
    std::cout << "[";
    // std::cout << get_timestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
    std::cout<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    
}
//-------------------------------- 4
void Account::makeDeposit(int _deposit)
{
    std::cout << "[";
    // std::cout << get_timestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    std::cout << ";deposi:" << _deposit << ";amount:" << _deposit + this->_amount << ";nb_deposits:" << this->_nbDeposits + 1;
    std::cout << std::endl;
    this->_amount += _deposit;
    Account::_totalNbDeposits++;
    Account::_totalAmount += _deposit;
}
//-------------------------------- 7
bool	Account::makeWithdrawal( int _withdrawal )
{
    std::cout << "[";
    // std::cout << get_timestamp();
    std::cout << "] ";
    if(_withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdarawal:refused" << std::endl;
        return(false);    
    }
    else
    {
       Account::_totalNbWithdrawals++;
        this->_amount -= _withdrawal;
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";amount:" << _withdrawal <<";withdarawal:" << this->_nbWithdrawals;
        std::cout << std::endl;
        Account::_totalAmount -= _withdrawal;
        return(true);
        
    }
    
}
//----------------------------------------- 10 
Account::~Account() 
{
    std::cout << "[";
    // std::cout << get_timestamp();
    std::cout << "] ";
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}






//---------------------------------get function
int Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}
//--------------------------------
int Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
//--------------------------------
int Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
    
}
//------------------------
int Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}





//-----------------------
int		Account::checkAmount( void ) const{
    std::cout << "checkAmount" << std::endl;
    return(0);
}





