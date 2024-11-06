#include <iostream>
#include <cmath>

int main()
{
    std::cout << "\033[91m>w< RED\033[0m\n";
    std::cout << "\033[33mUwU ORANGE\033[0m\n";
    std::cout << "\033[93mOwO YELLOW\033[0m\n";
    std::cout << "\033[92m-w- GREEN\033[0m\n";
    std::cout << "\033[96mTwT CYAN\033[0m\n";
    std::cout << "\033[94m>w< BLUE\033[0m\n";
    std::cout << "\033[95mQwQ PURPLE\033[0m\n";

    std::cout << "Give radius: ";
    double r;
    std::cin >> r;
    std::cout << "Give high: ";
    double h;
    std::cin >> h;
    double const pi = 3.14159265;
    double v = pi * pow(r, 2) * h;
    std::cout << "Volume: " << v;
    return 0;
}