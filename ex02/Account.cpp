#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.hpp"

#include <ctime>
int Account ::_nbAccounts;
int Account ::_totalAmount;
int Account ::_totalNbDeposits;
int Account ::_totalNbWithdrawals;

Account ::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std ::cout << "index:" << _accountIndex << ";"
			   << "amount:" << _amount << ";created" << std ::endl;
}

Account :: ~Account(void)
{
    _displayTimestamp();
    std :: cout << "index:" << _accountIndex << ";amount:" << _amount<<";closed" << std:: endl;
}

int Account ::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account ::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account ::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account ::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}


void Account ::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std ::cout <<"index:"<<_accountIndex<< ";p_amount:" << _amount << ";deposit:"<< deposit;
	std :: cout << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std ::endl;
	_amount += deposit;
    _totalAmount +=deposit;
}

bool Account ::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std ::cout <<"index:"<<_accountIndex<< ";p_amount:" << _amount << ";withdrawal:"<< withdrawal;
		std :: cout << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" <<_nbWithdrawals << std ::endl;
		_amount -= withdrawal;
        _totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std ::cout <<"index:"<<_accountIndex<< ";p_amount:" << _amount << ";withdrawal:refused" << std :: endl;
		return (false);
	}
}

void Account ::displayStatus() const
{
	Account ::_displayTimestamp();
	std ::cout <<"index:"<<_accountIndex<< ";amount:" << _amount << ";deposits:"<< _nbDeposits;
	std ::cout <<";withdrawals:"<<_nbWithdrawals << std ::endl;
}

int Account ::checkAmount() const
{
	return (_amount);
}

void Account ::_displayTimestamp(void)
{
	time_t zero = time(NULL);

	tm *local = localtime(&zero);
	std ::cout.fill('0');
	std ::cout << "[" << local->tm_year + 1900 << std ::setw(2) << local->tm_mon << std ::setw(2) << local->tm_mday << "_";
	std ::cout << local->tm_hour << local->tm_min << local->tm_sec << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std :: cout << "accounts:"<< _nbAccounts <<";total:"<< getTotalAmount() << ";deposits:";
	std :: cout << getNbDeposits() << ";withdrawals:"<< getNbWithdrawals() << std :: endl;
}
