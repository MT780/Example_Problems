#include "Checking.h"

Checking::Checking()
{
	interest = .001;
}

Checking::Checking(const double& amount)
	: Account(amount)
{
	interest = .001;
}

double Checking::daily_interest(const int& amount_of_days)
{
	double checking_amount = get_amount();

	if(checking_amount >= 1000)
	{
		checking_amount = checking_amount + (checking_amount * (amount_of_days * interest));
	}

	return checking_amount;
}
