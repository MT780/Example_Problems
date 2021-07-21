#include "util.h"

/*
 * Getss teh position of the smallest element in a vector range.
 * @param a the vector
 * @param from the beginning of the range
 * @param to the end of the range
 * @return the position of the smallest elemtn in the range
 */
int max_position(vector<int>& a, int from, int to)
{
	int max_pos = from;
	for (int i = from + 1; i <= to; i++)
		if (a[i] > a[max_pos]) max_pos = i;
	return max_pos;
}

/*
 * Sorts a vector using the selection sort algorithm.
 * @param a the vector to sort
 */
void selection_sort(vector<int>& a)
{
	for (int next = 0; next < a.size() - 1; next++)
	{
		int max_pos = max_position(a, next, a.size() - 1);
		if (max_pos != next)
			swap(a[max_pos], a[next]);
	}
}

int main()
{
	rand_seed();
	vector<int> v(20);
	for (int i = 0; i < v.size(); i++)
		v[i] = rand_int(1, 100);
	print(v);
	selection_sort(v);
	print(v);
	return 0;
}
