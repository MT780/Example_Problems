#include "P7_2.h"

int main()
{
	vector<Person*> list_of_p;
	vector<Car*> list_of_c;

	char answer = 'Y';
	int age = 0;
	string name = "";
	string driver = "";
	string model = "";

	cout << "Would you like to enter an individual? (Y/N)" << endl;
	cin >> answer;

	while(answer == 'Y')
	{
		cin.ignore(256, '\n');
		cout << "Enter name: ";
		getline(cin, name);

		cout << "Enter age: ";
		cin >> age;

		list_of_p.push_back(new Person(name, age));

		cout << "Would you like to enter another individual? (Y/N)" << endl;
		cin >> answer;
	}

	cout << "Would you like to enter a car model? (Y/N)" << endl;
	cin >> answer;

	while(answer == 'Y')
	{
		cin.ignore(256, '\n');
		cout << "Enter model: ";
		getline(cin, model);
		list_of_c.push_back(new Car(model));

		cout << "Would you like to enter another model? (Y/N)" << endl;
		cin >> answer;
	}
	
	for(int i = 0; i < list_of_p.size(); i++)
	{
		list_of_p[i]->incriment_age();
	}

	cin.ignore(256, '\n');

	for(int i = 0; i < list_of_c.size(); i++)
	{
		cout << "Who is the owner of the " << list_of_c[i]->get_model() << "?" << endl;
		cout << "Owner: ";
		getline(cin, name);

		for(int j = 0; j < list_of_p.size(); j++)
		{
			if(list_of_p[j]->get_name() == name)
			{
				list_of_c[i]->set_owner(list_of_p[j]);
				break;
			}
		}

		cout << "Who is the driver?" << endl;
		cout << "Driver: ";
		getline(cin, driver);


		for(int j = 0; j < list_of_p.size(); j++)
		{
			if(list_of_p[j]->get_name() == driver)
			{
				list_of_c[i]->set_driver(list_of_p[j]);
				break;
			}
		}
	}

	for(int i = 0; i < list_of_c.size(); i ++)
	{
		cout << list_of_c[i]->get_model() << endl;
		cout << setw(2) << "Owner: " << list_of_c[i]->get_owner() << endl;
		cout << setw(2) << "Driver: " << list_of_c[i]->get_driver() << endl;
	}

	return 0;
}
