#ifndef P5_4_H
#define P5_4_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
	public:
		//Default constructor
		Acount();

		//Adds money towards balance
		//@param money contains amount
		void add_to_account(double& money);

		//Withdraws money from account, and 5$ penalty if overdrawn
		double withdraw_from_account();

		//Returns balance to user
		double get_balance();

	private:
		double balance;
};

#endif
