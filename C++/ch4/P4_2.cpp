#include <iostream>

using namespace std;

void sort2(int& a, int& b)
{
	int value_holder = 0;

	if(a > b)
	{
		value_holder = a;
		a = b;
		b = value_holder;
	}
}

int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;

	sort2(u, v); // u is still 2, v is still 3

	cout << "u = " << u << ", v = " << v << endl;

	sort2(w, x); // w is now 1, x is now 4

	cout << "w = " << w << ", x = " << x << endl;

	return 0;
}
