#include "polynomial.h"

polynomial::polynomial()
{
   expression = " ";
}

void polynomial::read_poly(std::string& expression)
{
   char ch = ' ';
   int temp = 1;
   int coef = 1;
   int exp = 0;

   std::istringstream poly(expression);

   poly.get(ch);

   while(poly.fail() == false)
   {
      if(ch == '-')
      {
         temp = -1;
         poly.get(ch);
      }

      else if(ch == '+')
      {
         poly.get(ch);
      }

      if(ch >= '0' && ch <= '9')
      {
         poly.unget();
         poly >> coef;
         poly.get(ch);
      }

      if(ch >= 'a' && ch <= 'z')
      {
         poly.get(ch);
         if(ch == '^')
         {
            poly >> exp;
            poly.get(ch);
         }
         else
         {
            exp = 1;
            //poly.get(ch);
         }
      }
         
      coef *= temp;

      term[exp] = coef;

      temp = 1;
      coef = 1;
      exp = 0;
   }
}

//Works, but it accesses the same element too many times,
//Could improve by messing with lower and upper bound from beginning;
void polynomial::simplify()
{
    std::multimap<int, double>::iterator pos;
    std::multimap<int, double>::iterator temp_pos;

    term.clear();

    int coefficient = 0;

    for(pos = second_term.begin(); pos != second_term.end(); pos++)
    {
       std::multimap<int, double>::iterator lower = second_term.lower_bound(pos->first);
       std::multimap<int, double>::iterator upper = second_term.upper_bound(pos->first);
       for(temp_pos = lower; temp_pos != upper; temp_pos++)
       {
          coefficient += temp_pos->second;
       }

       term[pos->first] = coefficient;
       coefficient = 0;
    }
}

void polynomial::multiply()
{
   std::map<int, double>::iterator i;
   std::map<int, double>::iterator j;

   int exponent = 0;
   int coefficient = 0;


   for(i = term.begin(); i != term.end(); i++)
   {
      for(j = term.begin(); j != term.end(); j++)
      {
         exponent = i->first + j->first;
         coefficient = i->second * j->second;

         second_term.insert(std::make_pair(exponent, coefficient));
      }
   }

   simplify();
}

void polynomial::print()
{
   std::map<int, double>::reverse_iterator pos;

   for(pos = term.rbegin(); pos != term.rend(); pos++)
   {
      std::cout << "(" << pos->second << ", " << pos->first << ") ";
   }
}