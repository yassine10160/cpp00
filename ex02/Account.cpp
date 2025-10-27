/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:13:48 by yafahfou          #+#    #+#             */
/*   Updated: 2025/10/27 20:27:03 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
    _totalNbDeposits++;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    std::cout<<"accounts:"<<_nbAccounts<<";";
    std::cout<<"total:"<<_totalAmount<<";";
    std::cout<<"deposits:"<<_totalNbDeposits<<";";
    std::cout<<"withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _nbDeposits = 1;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

void    Account::displayStatus() const {
    
    std::cout<<"index:"<<_accountIndex<<";";
    if (_nbDeposits > 1)
        std::cout<<"p_amount:"<<_amount<<";";
    else
        std::cout<<"amount"<<_amount;
    std::cout<<"deposit:"<<_nbDeposits<<";";
    
}
bool    Account::makeWithdrawal(int withdrawal)
{
    
}

