#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <string>
#include <map>
#include <sstream>

class polynomial
{
public:
    //Default Constructor
    polynomial();
    
    /*Reads the polynomial to determine coefficient and exponential, then initialize map
      @param expression, is the polynomial in string form
    */
    void read_poly(std::string& expression);

    //simplifies an expression by combining like terms
    void simplify();

    //Multiplies the same polynomial into new map
    void multiply();

    //Prints out each term of the polynomial like so (coef, exp) ... (coef, exp)
    void print();
    
    
private:
std::string expression;
std::map<int, double> term;
std::multimap<int, double> second_term;  
};


#endif