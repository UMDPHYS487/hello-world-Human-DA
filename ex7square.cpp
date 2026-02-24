#include <iostream>

int main() {
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    switch (num) {
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            std::cout << num * num << std::endl;
            break;

        default:
            if (num % 2 != 0) {
                std::cout << static_cast<double>(num) / 2 << std::endl;
            } else {
                std::cout << "hahaha" << std::endl;
            }
            break;
    }

    return 0;
}