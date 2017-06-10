#include <iostream>

int doubleNumber( int x )
{
    return x * 2;
}

int main()
{
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << x << " doubled is " << doubleNumber( x ) << std::endl;

    return 0;
}
