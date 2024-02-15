/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:31 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/15 15:55:23 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 1;
	this->_totalNbDeposits++;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
	this->_nbAccounts--;
	this->_totalAmount -= this->_amount;
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
		return (false);
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	// TODO
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	// return (Account::_totalAmount);
}

void Account::_displayTimestamp(void)
{
}
