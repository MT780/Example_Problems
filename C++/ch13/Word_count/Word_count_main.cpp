//A simple program that stores all unique words from the text file,
//along with how many times it shows up. Then prints both unique
//word element along with the count of that unique word element.
#include <iostream>
#include <fstream>
#include <set>

/*Stores each word within a text file into a multiset then returns it.
  @param read, input stream variable for text file.
  @return, returns a multiset kown as wc.
*/
std::multiset<std::string> read_data(std::ifstream& read)
{
    std::string word = " ";
    std::multiset<std::string> wc;

    //might need to change to while, but lets see what happens
    while (read >> word)
    {
        wc.insert(word);
    }

    return wc;
}

/*Prints out a multiset.
  @param wc_set, a multiset that stores words and word count from text file.
*/
void print(std::multiset<std::string> wc_set)
{
    std::multiset<std::string>::iterator pos;
    int get_count = 0;
    int total_count = 0;
    std::string word = " ";


    for(pos = wc_set.begin(); pos != wc_set.end(); pos = wc_set.upper_bound(*pos))
    {
        get_count = wc_set.count(*pos);
        total_count += get_count;
        word = *pos;

        std::cout << word << ":" << get_count << "\n";
    }

    std::cout << "Total word count: " << total_count << "\n";
}

int main()
{
    std::ifstream read;

    std::string file_name = "word_duplicate_count.txt";
    
    read.open(file_name.c_str());

    if(read.fail())
    {
        std::cout << "Error opening " << file_name << "\n";
        return 1;
    }

    std::multiset<std::string> word_counter = read_data(read);

    print(word_counter);

    return 0;
}