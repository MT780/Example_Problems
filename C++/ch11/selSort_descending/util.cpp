#include <iostream>
#include <cstdlib>
#include <ctime>

#include "util.h"

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void print(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

void rand_seed()
{
	int seed = static_cast<int>(time(0));
	srand(seed);
}

int rand_int(int a, int b)
{
	return a + rand() % (b - a + 1);
}
