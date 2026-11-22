#include <iostream> // for std::cout and std::cin

int main()
{
    // copy initilization (to avoid)
    int x = 5;

    // direct initilization (to avoid)
    int y(6);

    // direct-list-initialization of initial value 5 into variable width (preferred)
    int width{5};
    // copy-list-initialization of initial value 6 into variable height (rarely used)
    int height = {6};

    // Why list initialization? Because narrowing conventions are disallowed. It means that if you try to list-initialize a
    // variable using a value that the variable can not safely hold, the compiler is required to produce a compilation error
    // or warning.
    // Exmaples:
    // /!\ int w1{4.5};  // compile error: list-init does not allow narrowing conversion
    int w2 = 4.5; // compiles: w2 copy-initialized to value 4
    int w3(4.5);  // compiles: w3 direct-initialized to value 4

    // default initialization, undeterminated value
    int a;

    // value-initialization / zero-initialization to value 0
    int width2{};

    // Instanciation means that a variable have been allocated and initialized

    // Unused variables (only use when needed)
    [[maybe_unused]] double pi{3.14159}; // Don't complain if pi is unused

    return 0;
}
