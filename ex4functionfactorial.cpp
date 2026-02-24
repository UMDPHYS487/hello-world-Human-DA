#include <iostream>

long long factorial(int n) {
    long long result = 1;
    for (int j = 1; j <= n; ++j) {
        result *= j;
    }
    return result;
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        long long factorialResult = factorial(i);
        
        std::cout <<"factorial of "<<i<< " is " << factorialResult << std::endl;
    }

    return 0;
}