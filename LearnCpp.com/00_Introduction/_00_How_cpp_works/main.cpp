#include <iostream>
#include "utils.h"

void log(const char *message);

int main()
{
    log("Hello\n");
    char c;
    std::cin >> c;
    log("you wrote: ");
    std::cout << c << "\n";
    std::cin.get();
}
