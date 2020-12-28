#include "Checking.h"
#include "Savings.h"

int main()
{
	Checking ch;
	Savings sa;
	const int DAYS = 30;
	double amount = 0;
	char answer;
	string type_of_transaction;


	cout << "Would like to make a transaction? (Y/N)" << endl;
	cin >> answer;

	while(answer == 'Y')
	{
		cout << "Which would you like to do? (Deposit/Withdrawl/Check)" << endl;
		cin >> type_of_transaction;

		if(type_of_transaction == "Deposit")
		{
			cout << "Enter amount: ";
			cin >> amount;

			cout << "Would you like to deposit in your Checking or Savings?" << endl;
			cin >> type_of_transaction;
			if(type_of_transaction == "Checking")
			{
				ch.deposit(amount);
			}
			else
			{
				sa.deposit(amount);
			}
		}
		else if(type_of_transaction == "Withdrawl")
		{
			cout << "Enter amount: ";
			cin >> amount;

			cout << "Would you like to withdraw from Checking or Savings?" << endl;
			cin >> type_of_transaction;
			if(type_of_transaction == "Checking")
			{
				ch.withdrawl(amount);
			}
			if(type_of_transaction == "Checking")
			{
				sa.withdrawl(amount);
			}
		}
		else if(type_of_transaction == "Check")
		{
			cout << "Your checking acount is $" << ch.daily_interest(DAYS) << endl;
			cout << "Your savings acount is $" << sa.daily_interest(DAYS) << endl;	
		}

		cout << "Would you like to make another transaction? (Y/N)" << endl;
		cin >> answer;
	}

	return 0;
}
