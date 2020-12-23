#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& list)
{
	int temp = 0;
	int end_of_v = list.size();
	int odd_or_even = list.size() % 2;

	if (odd_or_even = 1)
	{
		for(int i = 0; i < list.size()/2; i++)
			{
				temp = list[i];
				end_of_v -= 1;

				list[i] = list[end_of_v];
				list[end_of_v] = temp;
			}
	}

	else if (odd_or_even = 0)
	{
		for(int i = 0; i < (list.size()/2) - 1; i++)
			{
				temp = list[i];
				end_of_v -= 1;

				list[i] = list[end_of_v];
				list[end_of_v] = temp;
			}
	}
}

int main()
{
	vector<int> l {1, 4, 9, 16, 9, 7, 4, 9, 11};

	cout << "Before: ";

	for(int i = 0; i < l.size(); i++)
	{
		cout << l[i];

		if (i < l.size() - 1)
		{
			cout << ", ";
		}
	}

	reverse(l);

	cout << endl << "After: ";


	for(int i = 0; i < l.size(); i++)
	{
		cout << l[i];

		if (i < l.size() - 1)
		{
			cout << ", ";
		}
	}

	cout << endl;

	return 0;
}
