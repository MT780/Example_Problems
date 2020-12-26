#include "P7_1.h"
#include <iomanip>

int main()
{
	char answer;
	string name;
	vector<Person*> list;

	cout << "Would you like to enter a name? (Y/N)" << endl;
	cin >> answer;

	while (answer == 'Y')
	{
		cin.ignore(256, '\n');

		cout << endl << "Name: ";
		getline(cin, name);

		list.push_back(new Person(name));

		cout << endl << "Would you like to enter another name? (Y/N)" << endl;
		cin >> answer;
	}

	cin.ignore(256, '\n');

	for(int i = 0; i < list.size(); i++)
	{
		//cin.ignore(256, '\n');

		cout << endl << "Who is " << list[i]->get_name() << " best friend?" << endl;
		cout << "Best friend: ";
		getline(cin, name);

		for(int j = 0; j < list.size(); j++)
		{
			if (list[j]->get_name() == name)
			{
				list[i]->set_best_friend(list[j]);
				break;
			}
		}
	}

	cout << setw(13) << "Name" << "|";
	cout << setw(13) << "Best Friend" << "|";
        cout << "Popularity counter" << endl;

	for(int i = 0; i < list.size(); i++)
	{
		cout << setw(13) << list[i]->get_name() << "|";
	        cout << setw(13) << list[i]->get_best_friend() << "|";
	        cout << list[i]->get_counter() << endl;
	}

	cout << endl;

	return 0;
}
