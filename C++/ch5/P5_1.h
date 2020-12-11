#ifndef P5_1_H
#define P5_1_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		/*
		 * Sets age to 0 within the data field.
		 */
		Person();

		Person(string pname);

		/*
		 * Sets name and age to pname and page in that respective order.
		 */
		Person(string pname, int page);

		/*
		 * Provides user with name
		 * @return the name of the person
		 */
		string get_name() const;

		/*
		 * Provides user with the age
		 * @return the age of the person
		 */
		void get_age() const;

	private:
		string name;
		int age; // 0 if unknown
};

#endif
