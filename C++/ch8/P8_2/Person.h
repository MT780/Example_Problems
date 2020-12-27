#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		//Default constructor
		Person();

		//Constructor that defines person
		//@param name initializes name
		//@param b_day initializes birthday as MM/DD/YYYY
		Person(const string& name, const string& b_day);

		//Provides name
		//@return the name;
		string get_name() const;

		//Provides birthday
		//@return the date of birth
		string get_b_day() const;

		//Prints Person's name
		virtual void print();

	private:
		string name;
		string b_day;
};

#endif
