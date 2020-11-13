#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int result = 0;
	int first = 1;
	int last = 5;

	for(int exponent = 2; exponent <= 4; exponent++)
	{
		for(int base = 1; base <= 5; base++)
		{
			result = pow(base,exponent);

			if(base == first)
				cout << "For the power of " << exponent << ", with a base between 1-5, the results are: " << result << ", ";
			else if(base != last && base != first)
				cout << result << ", ";
			else if(base == last)
				cout << "and " << result << endl;
		}
	}

	return 0;
}
