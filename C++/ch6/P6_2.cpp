#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double alternating_sum(const vector<double>& sum)
{
	double result = 0;

	for(int i = 0; i < sum.size(); i++)
	{
		result += pow(-1, i) * sum[i];
	}

	return result;
}

int main()
{
	int result = 0;

	vector<double> sum {1, 4, 9, 16, 9, 7, 4, 9, 11};

	result = alternating_sum(sum);

	cout << "The alternating sum of:" << endl;
	for (int i = 0; i < sum.size(); i++)
	{
		cout << sum[i] << " ";
	}

	cout << "= " << result << endl;

	return 0;
}
