#include    <iostream>


typedef struct s_Data
{
    std::string name;
    int n;
    // std::string s2;
} Data;

class Serializer
{
private:
    Serializer(/* args */);
    ~Serializer();
    Serializer(Serializer const &src);
    Serializer &operator=(Serializer const &rhs);
public:

     static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

