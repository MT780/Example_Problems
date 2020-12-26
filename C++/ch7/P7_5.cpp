#include <iostream>

using namespace std;

//Calculates the average of the array
//@param a, pointer to the beginning of the array
//@param a_size, maximum size of the array
//@return total, return the average
double average(double* a, int a_size)
{
	double total = 0;

	for(int i = 0; i < a_size; i++)
	{
		total += *(a + i);
	}

	total /= a_size;

	return total;
}


int main()
{
	int CAPACITY = 5;
	double A[CAPACITY] = {1, 2, 3, 4, 5};
        double mean = 0;

	mean = average(A, CAPACITY);
	
	cout << "The average is: " << mean << endl;
	
	return 0;
}
