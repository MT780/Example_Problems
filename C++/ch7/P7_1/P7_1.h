#ifndef P7_1_H
#define P7_1_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
	public:
		Person();
		Person(const string& name);
		string get_name() const;
		void set_best_friend(Person* bf);
		string get_best_friend() const;
		void set_counter();
		int get_counter() const;

	private:
		string name;
		Person* best_friend;
		int popularity_counter;

};

#endif
