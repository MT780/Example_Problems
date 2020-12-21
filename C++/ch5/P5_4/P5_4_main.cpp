#include "P5_4.h"

int main()
{
	string type_of_trans = "";
	double amount = 0;
	char answer;
	Account person;

	cout << "Would you like to make a transaction? (Y/N)" << endl;
	cin >> answer;

	while (answer == 'Y')
	{

	cin.ignore(256, '\n');
	cout << "Please state whether you will like to deposit, withdrawl, or know balance" << endl;
	getline(cin, type_of_trans);

	if (type_of_trans == "deposit" || type_of_trans == "Deposit")
	{

		cout << "Please enter deposit: ";
		cin >> amount;
		person.deposit(amount);
	}

	else if (type_of_trans == "withdrawl" || type_of_trans == "Withdrawl")
	{
		cout << "Please enter amount you will like to withdraw: ";
		cin >> amount;
		person.withdraw(amount);
	}

	else if (type_of_trans == "balance" || type_of_trans == "Balance" || type_of_trans == "know balance")
	{
		amount = person.get_balance();
		cout << "Your current balance is $" << amount << endl;
	}

	cout << endl << "Would you like to make a transaction? (Y/N)" << endl;
	cin >> answer;
	}
}
