#include <iostream>
#include <vector>

using namespace std;

double scalar_product(vector<double> a, vector<double> b)
{
	double product = 0;

	for(int i = 0; i < a.size(); i++)
	{
		product += a[i]*b[i];
	}

	return product;
}

int main()
{
	double curr_value = 0;
	double result = 0;

	vector<double> A;
	vector<double> B;

	char answer = 'Y';

	while(answer == 'Y')
	{
		cout << "Enter value for the first vector: ";
		cin >> curr_value;

		A.push_back(curr_value);

		cout << "Enter value for the second vector: ";
		cin >> curr_value;

		B.push_back(curr_value);

		cout << "Would you like to input answer value for the scalar vectors? (Y/N)" << endl;
		cin >> answer;
	}

	result = scalar_product(A, B);

	cout << "The result is the following: " << result << endl;

	return 0;
}
