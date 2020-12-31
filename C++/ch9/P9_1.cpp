//Ask user for a file name and display number of characters, words, and lines
//in that file. Then ask for the name of the next file. When user enters a file
//that doesn't exist the program should exit.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int read_char(ifstream& infile)
{
	int ch_counter = 0;
	char new_ch;

	while (infile >> new_ch)
	{
		ch_counter++;
	}

	infile.clear();
	infile.seekg(0, ios::beg);
	
	return ch_counter;	
}


int read_words(ifstream& infile)
{
	int wrd_counter = 0;
	string new_word;

	while (infile >> new_word)
	{
		wrd_counter++;
	}

	infile.clear();
	infile.seekg(0, ios::beg);

	return wrd_counter;
}

int read_lines(ifstream& infile)
{
	int line_counter = 0;
	string new_line;

	while (getline(infile, new_line))
	{
			line_counter++;
	}

	infile.clear();
	infile.seekg(0, ios::beg);
	return line_counter;
}

int main()
{
	ifstream infile;

	string file_path = "";
	cout << "Please enter the path where the file is located: " << endl;
	getline(cin, file_path);

	infile.open(file_path.c_str());

	if (infile.fail())
	{
		cout << file_path  << " doesn't exit." << endl;
		return 1;
	}

	int number_of_char = read_char(infile);
	int number_of_words = read_words(infile);
	int number_of_lines = read_lines(infile);

	cout << "Number of character: " << number_of_char << endl;
	cout << "Number of words: " << number_of_words << endl;
	cout << "Number of lines: " << number_of_lines << endl;
	
	infile.close();

	return 0;
}
