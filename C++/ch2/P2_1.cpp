#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	long result = 0;

	for(int exp = 1; exp <= 10; exp++)
	{
		result = pow(10, exp);
		cout << result << endl;
	}

	return 0;
}
