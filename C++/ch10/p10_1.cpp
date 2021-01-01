#include <iostream>
#include <string>

using namespace std;

string reverse(string word)
{
	string shorter_word; 
	int actual_size = word.length() - 1; 

	if (word.length() <= 1)
	{
		return word;
	}

	else
	{
		string beginning = word.substr(0, 1);

		string other_part = word.substr(1);

		word = reverse(other_part) + beginning;

		return word; 
	}
}

int main()
{
	string word;
	cout << "Enter a string: " << endl;
	cin >> word;

	word = reverse(word);

	cout << word << endl;

	return 0;
}
