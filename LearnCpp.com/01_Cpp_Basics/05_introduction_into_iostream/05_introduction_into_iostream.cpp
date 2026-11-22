#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    std::cout << "Enter three numbers: ";
    int a{};
    int b{};
    int c{};
    std::cin >> a >> b >> c;

    std::cout << "You entered " << a << ", " << b << ", and " << c << ".\n";

    return 0;
}
