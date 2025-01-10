
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}
ScalarConverter::~ScalarConverter()
{
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return *this;
}

void ScalarConverter::convert(const std::string input)
{
    
    double number = std::atof(input.c_str());


    int i = 0;
    int x =0;
    if(input.length()== 0)
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }

    while (input[i] )
    {
        if (isdigit(input[i]) || 
        (input[i] == '.' && !x) || 
        (i == (int)(input.length()-1) && input[input.length()-1] == 'f') || 
        (i ==0 &&(input[i] == '-' || input[i] == '+')))
        {
            if (input[i] == '.')
                x++;
        }
        else
        {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: impossible\n";
            std::cout << "double: impossible\n";
            return;
        }
        i++;
    }
    
    

    if(isprint(number))
        std::cout << "char: '" << static_cast<char>(number) << "'\n";
    else
        std::cout << "char: Non displayable\n";

    x = input.find(".") ;
    if (x == -1)
        x = input.length() - 1;
    else if (input[input.length()-1] == 'f')
        x+= 2;
    else
        x++;
    
    if(input == "-inff" || input == "+inff" || input == "nanf")
    {
        std::cout << "int: impossible\n";
        std::cout << "float: " << input << std::endl;
        std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
        return;
    }
    if(input == "-inf" || input == "+inf" || input == "nan")
    {
        std::cout << "int: impossible\n";
        std::cout << "float: " << input + "f" << std::endl;
        std::cout << "double: " << input << std::endl;
        return;
    }
    std::cout << std::fixed << std::setprecision((input.length() ) - x) ;

    if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(number) << std::endl;

    if (number > std::numeric_limits<float>::max() || number < std::numeric_limits<float>::min())
        std::cout << "float: impossible\n";
    else
        std::cout << "float: " << number << "f" <<std::endl;

    if (number > std::numeric_limits<double>::max() || number < std::numeric_limits<double>::min())
        std::cout << "double: impossible\n";
    else
        std::cout << "double: " << number << std::endl;
    
}