#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class Checking : public Account
{
	public:
		Checking();
		Checking(const double& amount);
		virtual double daily_interest(const int& amount_of_days);
	private:
		double interest;
};
#endif
