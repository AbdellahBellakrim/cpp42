/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:36:02 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 12:07:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//------------------------- 1 ok
Account::Account(int initial_deposit)
{
    Account::_displayTimestamp();
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
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
//---------------------------- 3 , 6 , 9 ok
void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
    std::cout<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    
}
//-------------------------------- 4
void Account::makeDeposit(int _deposit)
{
    Account::_displayTimestamp();
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
    Account::_displayTimestamp();
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
    Account::_displayTimestamp();
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
//---------------------------------------- dispaly time
void Account::_displayTimestamp(void)
{
	char str[20];
	std::time_t timestamp = std::time(NULL);
	std::strftime (str, 20, "%Y%m%d_%H%M%S", std::localtime(&timestamp));
	std::cout << "[" << str << "] ";
}