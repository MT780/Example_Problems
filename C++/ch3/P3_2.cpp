#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_input = "";
	string value = "";
	string shape = "";
	string v_string = "";
	string s_string = "";

	int length = 0;

	cout << "Enter the card notation: ";
	cin >> user_input;

	length = user_input.length();

	if (length == 3)
	{
		value = user_input.substr(0, 2);
		shape = user_input.substr(2, 1);
	}
	else if (length == 2)
	{
		value = user_input.substr(0, 1);
		shape = user_input.substr(1, 1);
	}
	else if(cin.fail() || length > 3)
	{
		break;
		return 0;
	}

		if (value == "A")
			v_string = "Ace";
		else if (value == "2")
			v_string = "Two";
		else if (value == "3") 
			v_string = "Three";
		else if (value == "4")
		       	v_string = "Four";
		else if (value == "5")
		       	v_string = "Five";
		else if (value == "6")
		       	v_string = "Six";
		else if (value == "7")
		       	v_string = "Seven";
		else if (value == "8")
		       	v_string = "Eight";
		else if (value == "9")
		       	v_string = "Nine";
		else if (value == "10")
		       	v_string = "Ten";
		else if (value == "J")
		       	v_string = "Jack";
		else if (value == "Q")
		       	v_string = "Queen";
		else if (value == "K")
		       	v_string = "King";

		if (shape == "D")
		       	s_string = "Diamonds";
		else if (shape == "H")
		       	s_string = "Hearts";
		else if (shape == "S")
		       	s_string = "Spades";
		else if (shape == "C")
		       	s_string = "Clubs";

	cout <<  v_string << " of " << s_string << endl;

	return 0;
}
