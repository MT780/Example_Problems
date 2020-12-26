#include <iostream>

using namespace std;

//Find the biggest number within array
//@param a, the array
//@param a_size, the maximum size of array
//@return (a + max_size), returns the pointer holding the biggest number
double* maximum(double a[], int a_size)
{
	if (a_size == 0)
		return NULL;

	int max_index = 0;

	for (int i = 1; i < a_size; i++)
	{
		if(*(a + i) > *(a + max_index))
		{
			max_index = i;
		}
	}

	return (a + max_index);
}


int main()
{
	const int CAPACITY = 5;
	double A[CAPACITY] = {2, 1, 4, 5, 3};

	double* max = maximum(A, CAPACITY);

	cout << "Max is: " << *max << endl;

}
