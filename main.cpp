#include <iostream>

int pow5(int f)
{
    return f * 5;
}

int main()
{
    int f;
    std::cin >> f;

    std::cout << pow5(f) << std::endl;

    return 0;
}