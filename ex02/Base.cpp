#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base::~Base()
{
}
Base * generate(void)
{
    srand(time(NULL));
    int random = rand() % 3;
    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "type Base is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "type Base is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "type Base is C" << std::endl;
}


void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "type Base is A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "type Base is B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "type Base is C" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    }
}