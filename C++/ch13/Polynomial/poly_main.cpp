//To show how the process of iterating and inserting through a map works
//by taking an polynomal and using the exponenet and coefficient as a 
//key and value respectively
#include "polynomial.h"

int main()
{
   int answer = 0;
   polynomial math_stuff;

   std::cout << "What would you like to do? (Type number)\n";
   std::cout << "1) Insert polynomial\n";
   std::cout << "2) Multiply polynomials\n";
   std::cout << "3) Print polynomial\n";
   std::cout << "4) Exit\n";
   std::cout << "Answer: ";
   std::cin >> answer;

   while(answer != 4)
   {
      if(answer == 1)
      {
         std::string expression = "";

         std::cin.ignore(256, '\n');
         std::cout << "Enter polynomial: ";
         getline(std::cin, expression);

         math_stuff.read_poly(expression);
      }
      else if(answer == 2)
      {
         math_stuff.multiply();
      }
      else if(answer == 3)
      {
         math_stuff.print();
      }

      std::cout << "What would you like to do? (Type number)\n";
      std::cout << "Answer: ";
      std::cin >> answer;
   }

   return 0;
}