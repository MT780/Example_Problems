#include <iostream>

using namespace std;

void sort3(int& a, int& b, int& c)
{
	int hold_v = 0;

	if(b < a && b < c)
	{
		hold_v = a;
		a = b;
		b = hold_v;
	}
	
	else if(c < a && c < b)
	{
		hold_v = a;
		a = c;
		c = hold_v;
	}

	if(c < b)
	{
		hold_v = b;
		b = c;
		c = hold_v;
	}
}

int main()
{
	int v = 3;
	int w = 4;
	int x = 1;

	cout << v << ", " << w << ", " << x << endl;

	sort3(v, w, x); // v is now 1, w is now 3, x is now 4

	cout << v << ", " << w << ", " << x << endl;
}
