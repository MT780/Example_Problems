// Review for binary trees and a implementation of searching for the smallest value
#include "BinarySearchTree.h"

int main()
{
   BinarySearchTree a;
   int smallest_value = 0;

   a.insert(15);
   a.insert(75);
   a.insert(42);
   a.insert(24);
   a.insert(7);
   a.insert(22);
   a.insert(33);

   a.print();

   smallest_value = a.smallest();

   std::cout << "The smallest value is: " << smallest_value << "\n";

   a.erase(33);

   a.print();

   return 0;
}