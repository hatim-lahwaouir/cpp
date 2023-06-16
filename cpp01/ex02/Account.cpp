/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:01:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/16 15:11:56 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp()
{
    std::cout << "[19920104_091532]" << " ";
}


Account::Account(int anmount)
{
    this->_amount = anmount;
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout<< "index" << this->_accountIndex << ";";
    std::cout<< "amount" << this->_accountIndex << anmount << ";";
    std::cout<< "created" << std::endl;
    Account::_totalAmount += anmount;
    Account::_nbAccounts++;
}

// desposit action
void	Account::makeDeposit( int deposit )
{
    int save_amount;

    Account::_displayTimestamp();
 
    displayStatus();
    Account::_displayTimestamp();
    save_amount = _amount;
    if (deposit)
    {
        _amount += deposit;
        _nbDeposits++;
        Account::_totalAmount += deposit;
        Account::_totalNbDeposits++;
        
    }
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amoutn:" << save_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amoutn:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

// withdrawal action
bool	Account::makeWithdrawal( int withdrawal )
{
    int save_amount;

    displayStatus();
    save_amount = _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amoutn:" << save_amount << ";";

    if (_amount >= withdrawal)
    {
        _amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        _nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
    }
    else
    {
        std::cout << "withdrawal" << "refused" << std::endl;
        return (false);
    }

    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amoutn:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbWithdrawals << std::endl;
    return (true);
}

void    Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "anmount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}


Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "anmount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}