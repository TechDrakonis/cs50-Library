#include "cs50.hpp"
#include <iostream>

using std::string;

// prompt the user for ...
char get_char(string, char c); // a char
double get_double(string, double d); // a double
float get_float(string, float f); // a float

int get_int(string str, int i) // an int
{
  try
  {
    std::cout << str;
    std::cin >> i;
  }
  catch(...)
  {
    return get_int(str);
  }

  return i;
}

long get_long(string, long l); // a long int
string get_string(string, string s); // a string
