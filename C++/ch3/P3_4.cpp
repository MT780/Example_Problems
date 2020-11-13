#include <iostream>
#include <string>

using namespace std;

int main()
{
	string letter_grade = "";
	string letter = "";
	string sign = "";
	int length_of_string = 0;
	float number_grade = 0;

	cout << "Enter a letter grade: ";
	cin >> letter_grade;

	length_of_string = letter_grade.length();

	if(length_of_string == 2)
	{
		letter = letter_grade.substr(0,1);
		sign = letter_grade.substr(1,1);
	}
	else
	{
		letter = letter_grade.substr(0,1);
	}

	if(letter == "A")
		number_grade = 4;
	else if (letter == "B")
		number_grade = 3;
	else if (letter == "C")
		number_grade = 2;
	else if (letter == "D")
		number_grade = 1;
	else if (letter == "F")
		number_grade = 0;

	if(sign == "+")
		number_grade += 0.3;
	else if(sign == "-")
		number_grade -= 0.3;

	if (letter == "A" && sign == "+")
		number_grade = 4.0;
	else if (letter == "F" && sign == "-")
	{
		cout << "F- is not a valid grade." << endl;
		return 0;
	}
	cout << "The numeric value is " << number_grade << "." << endl;

	return 0;
}
