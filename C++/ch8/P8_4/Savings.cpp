#include "Savings.h"

Savings::Savings()
{
	interest = .002;
}

Savings::Savings(const double& amount)
	: Account(amount)
{
	interest = .002;
}

double Savings::daily_interest(const int& amount_of_days)
{
	double savings_amount = get_amount();

	if(savings_amount >= 1000)
	{
		savings_amount = savings_amount + (savings_amount * (amount_of_days * interest));
	}

	return savings_amount;
}
