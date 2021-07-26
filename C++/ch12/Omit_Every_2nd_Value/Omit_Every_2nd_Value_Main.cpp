//A simple program to understand list::erase() function along with list STL library
#include <iostream>
#include <string>
#include <list>


/*
  Prints list
  @param name, a reference to the list
*/
void print(std::list<std::string>& names)
{
    std::list<std::string>::iterator pos;

    for(pos = names.begin(); pos != names.end(); pos++)
       std::cout << *pos << ", ";
        

    std::cout << std::endl;
}

/*
  Deletes every other element within the list
  @param name, a reference to the list
*/
void downsize(std::list<std::string>& names)
{
    std::list<std::string>::iterator pos;

    for(pos = names.begin(); pos != names.end();)
    {
        pos++;
        
        if(pos == names.end())
           return;

        pos = names.erase(pos);
           
    }
}

int main()
{
    std::list<std::string> names;
    std::string answer = " ";
    bool decision = false;


    std::cout << "Would you like to enter a name into the list? (Y/N)";
    std::cin >> answer;
    
    if(answer == "Y" || answer == "y") 
       decision = true;

    std::cout << "Type \"Exit\" when you wish to stop adding names." << std::endl;

    std::cin.ignore(256, '\n');

    while(decision == true)
    {
        std::cout << "Name: ";
        getline(std::cin, answer);

        if(answer == "Exit" || answer == "exit") 
           decision = false;

        else
        {
            names.push_back(answer);
            answer = "";
        }
    }

    print(names);

    downsize(names);

    print(names);
}