#include "P5_4.h"

Account::Account()
{
	balance = 0;
}

void Account::deposit(double& money)
{
	balance += money;
}

void Account::withdraw(double& withdraw_amnt)
{
	balance -= withdraw_amnt;

	if (balance < 0)
	{
		balance -= 5;
		cout << "Account was overdrawn, a 5$ penalty has been placed"; 
	}
}

double Account::get_balance()
{
	return balance;
}
