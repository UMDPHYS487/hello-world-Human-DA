#include <iostream>

long long factorial(int n) {
    long long result = 1;
    for (int j = 1; j <= n; ++j) {
        result *= j;
    }
    return result;
}

int main() {
    int userInput;

    std::cout << "Please enter an integer value: ";
    std::cin >> userInput;

    long long factorialResult = factorial(userInput);

    std::cout << "The value you entered is " << userInput 
              << " and its factorial is " << factorialResult << std::endl;

    return 0;
}