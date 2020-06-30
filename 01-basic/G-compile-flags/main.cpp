#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello compile flags." << std::endl;

#ifdef EX2
    std::cout << "Hello compile flag EX2!\n";
#endif

#ifdef EX3
    std::cout << "Hello compile flag EX3!\n";
#endif
}
