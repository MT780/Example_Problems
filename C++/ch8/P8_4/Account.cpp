#include "Account.h"

Account::Account()
{
	amount = 0;
}

Account::Account(const double& amount)
{
	this->amount = amount;
}

void Account::deposit(const double& amount)
{
	this->amount += amount;
}

void Account::withdrawl(const double& amount)
{
	this->amount -= amount;
}

double Account::get_amount() const
{
	return amount;
}
