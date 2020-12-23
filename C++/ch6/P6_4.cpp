#include <iostream>
#include <vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b)
{
	for (int i = 0; i < b.size(); i++)
	{
		a.push_back(b[i]);
	}

	return a;
}

int main()
{
	vector<int> first_part {1, 4, 9, 16};
	vector<int> second_part {9, 7, 4, 9, 11};

	vector<int> final = append(first_part, second_part);

	for (int i = 0; i < final.size(); i++)
	{
		cout << final[i];

		if (i < final.size() - 1)
		{
			cout << ", ";
		}
	}

	cout << endl;

	return 0;
}
