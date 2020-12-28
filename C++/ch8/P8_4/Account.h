#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
	public:
		//Default constructor
		Account();

		Account(const double& amount);

		//Deposits amount into cash
		//@param amount, the amount of cash being deposited
		void deposit(const double& amount);

		//Withdrawls amount from the account
		//@param amount, the amount of cash you want to take out
		void withdrawl(const double& amount);

		//Get current amount
		//@return total cash in account
		double get_amount() const;

	private:
		double amount;
};

#endif
