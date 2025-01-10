#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter
{
    private:
        
    public: 
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &obj);
        static void convert(const std::string input);

};

#endif