#ifndef P5_4_H
#define P5_4_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
	public:
		//Default constructor
		Account();

		//Adds money towards balance
		//@param money contains amount
		void deposit(double& money);

		//Withdraws money from account, and 5$ penalty if overdrawn
		void withdraw(double& withdraw_amnt);

		//Returns balance to user
		double get_balance();

	private:
		double balance;
};

#endif
