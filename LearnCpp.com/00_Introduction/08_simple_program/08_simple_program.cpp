#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "How far will I go with you?";

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user

    return 0;
}