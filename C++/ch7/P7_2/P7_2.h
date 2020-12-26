#ifndef P7_2_H
#define P7_2_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
	public:
		Person();
		Person(const string& name, int& age);
		void incriment_age();
		string get_name() const;
	private:
		string name;
		int age;
};

class Car
{
	public:
		Car();
		Car(const string& model);
		string get_model() const;
		void set_owner(Person* owner);
		string get_owner() const;
		void set_driver(Person* driver);
		string get_driver() const;
	private:
		string model;
		Person* owner;
		Person* driver;
};

#endif
