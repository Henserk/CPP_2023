#include <iostream>
#include <string>


void reverse(const std::string& str) {
    for (int i = str.length() - 1; i >= 0; --i) {
        std::cout << str[i];
    }
}

int main() {
    std::string input;
    std::cout << "Vvod texta: ";
    std::getline(std::cin, input);

    reverse(input);
    return 0;
}
