/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:53:39 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/27 12:38:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = getNbAccounts();
    std::cout << "[19920104_091532]" << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";created" << std::endl;
    
}

Account::~Account( void )
{
    std::cout << "[19920104_091532]" << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts( void )
{
    return (Account::_nbAccounts++);
}

int Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}
