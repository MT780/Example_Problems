#include <iostream> 
#include <string>

using namespace std;

int main()
{
	float numeric_grade = 0;
	string letter = "";


	cout << "Enter the numeric grade (between 0-4): ";
	cin >> numeric_grade;

	if (numeric_grade <= 0.69)
		letter = "F";
	else if (numeric_grade > 0.69 && numeric_grade <= 0.84)
		letter = "D-";
	else if (numeric_grade >= 0.85 && numeric_grade <= 1.29)
		letter = "D";
	else if (numeric_grade >= 1.30 && numeric_grade <= 1.69)
		letter = "D+";
	else if (numeric_grade >= 1.7 && numeric_grade <= 1.84)
		letter = "C-";
	else if (numeric_grade >= 1.85 && numeric_grade <= 2.29)
		letter = "C";
	else if (numeric_grade >= 2.30 && numeric_grade <= 2.69)
		letter = "C+";
	else if (numeric_grade >= 2.7 && numeric_grade <= 2.84)
		letter = "B-";
	else if (numeric_grade >= 2.85 && numeric_grade <= 3.29)
		letter = "B";
	else if (numeric_grade >= 3.30 && numeric_grade <= 3.69)
		letter = "B+";
	else if (numeric_grade >= 3.7 && numeric_grade <= 3.84)
		letter = "A-";
	else if (numeric_grade >= 3.85 && numeric_grade <= 3.99)
		letter = "A";
	else if (numeric_grade >= 4.0)
		letter = "A+";

	cout << "Letter grade is " << letter << "." << endl;
	
	return 0;
}
