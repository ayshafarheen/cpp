#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base * generate(void)
{
    std::srand((int) std::time(0));
    Base *b;
    int type = (rand() % 3) + 1;
    switch (type)
    {
        case 1: b = new A();
                break;
        case 2: b = new B();
                break;
        case 3: b = new C();
                break;
    }
    return b;
}
void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "Belongs to class A!" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "Belongs to class B!" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "Belongs to class C!" << std::endl;

}

void identify(Base& p)
{
    try
    {
        Base &b = dynamic_cast<A&>(p);
        (void) b;
        std::cout << "Belongs to class A!" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
     try
    {
        Base &b = dynamic_cast<B&>(p);
        (void) b;
        std::cout << "Belongs to class B!" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
     try
    {
        Base &b = dynamic_cast<C&>(p);
        (void) b;
        std::cout << "Belongs to class C!" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
}
