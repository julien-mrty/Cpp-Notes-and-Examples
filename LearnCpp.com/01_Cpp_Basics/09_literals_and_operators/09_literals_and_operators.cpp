#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x{5};
    std::cout << x << '\n'; // print the value of a variable

    /*
    When creating the variable x and initilizing it with the value 5, the compiler will take the value 5 and put it
    into the memory allocation of x.
    When we print x, the compiler will generate code that causes std::cout to print the value at the memory location of x.

    Both output statements do the same thing. But in the case of the literal, the value 5 can be printed directly. In the
    case of the variable, the value 5 must be fetched from the memory the variable represents.

    This also explains why a literal is constant while a variable can be changed. Literals are values that are inserted
    directly into the source code. These values usually appear directly in the executable code (unless they are optimized out).
    Whereas objects and variables represent memory locations that hold values. These values can be fetched/changed on demand
    while the executable is running.
    */

    return 0;
}
