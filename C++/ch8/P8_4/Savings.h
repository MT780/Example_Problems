#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
	public:
		Savings();
		Savings(const double& amount);
		virtual double daily_interest(const int& amount_of_days);

	private:
		double interest;
};

#endif
