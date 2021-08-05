//Finds the union and intersect of both sets a and b
#include <iostream>
#include <set>

/* Finds the union between set a and b then returns the union
  @param a, the first set of integers
  @param b, the second set of integers
*/
std::set<int> set_union(std::set<int> a, std::set<int> b)
{
   std::set<int>::iterator pos;

   for(pos = b.begin(); pos != b.end(); pos++)
   {
      a.insert(*pos);
   }

   return a;
}

/* Finds the intersection between set a and b then returns the set of intersection
  @param a, the first set of integers
  @param b, the second set of intergers
*/
//realized that if you delete an element using erase(), you also mess up the iterator.
//I guess you can use pointers, but the process would be too long, 
//unless you absolutely know it will be more efficient.
std::set<int> intersection(std::set<int> a, std::set<int> b)
{
   std::set<int>::iterator pos;
   std::set<int> temp_inter;
   int temp;

   for(pos = b.begin(); pos != b.end(); ++pos)
   {
      temp = a.count(*pos);
      
      if(temp == 1)
      {
         temp_inter.insert(*pos);
      }
   }

   return temp_inter;
}

/* Prints out given set.
  @param i, the set to be examined
*/
void print(const std::set<int>& i)
{
   std::set<int>::iterator pos;

   for(pos = i.begin(); pos != i.end(); pos++)
   {
      std::cout << *pos << ", ";
   }

   std::cout << std::endl;
}

int main()
{
   std::set<int> a {1, 2, 3, 4, 5};
   std::set<int> b {3, 5, 7, 8, 9};

   std::set<int> A = set_union(a, b);
   std::set<int> B = intersection(a, b);

   std::cout << "The union of (a) and (b) is: ";
   print(A);
   std::cout << std::endl;

   std::cout << "The intersection of (a) and (b) is: ";
   print(B);
   std::cout << std::endl;

   return 0;
}