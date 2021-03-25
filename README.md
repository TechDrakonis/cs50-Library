# IDEA
The cs50 staff of the Harvard University has written a library called 'cs50.h'. This library is written in the C-language so that you can use it in C++ as well. But I asked myself, if C++ gives the programmer the possibility to write a library with the same functions but with improved performance, easier usage and improved maintainability. With this overloaded template function in my header file I hope, that my aims were reached.

> If you're asking, why I called the new header file c++s50, despite that the c stands for computer and the s for science, then read this...
>
> I wanted the file to be not only different from the inside but also from the outside. After long hours/minutes of thinking, I elected c++s50, because it also indicates, that the functions are written in c++. But you're welcome to deliver other name-ideas via a commit.

## cs50 origin
The original cs50 library documentation: <https://cs50.readthedocs.io/libraries/cs50/c/>.

## c++s50

### example of the usage
    #include <iostream>
    #include "c++s50.hpp"

    int main()
    {
      // template <typename T>
      // void get_value(std::string outstr, T &value)
      char character;
      get_value("Please input a char: ", character);
      std::cout << character << "\n";

      // template <typename T>
      // T get_value(std::string outstr);
      std::cout << get_value <double> ("Please input a floating point number: ") << "\n";
    }
