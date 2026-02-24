#include <iostream>

int main() {
    long long factorial = 1;

    for (int n = 1; n <= 10; ++n) {
        factorial *= n;
        std::cout << n << "factorial of "<<n<<" is " << factorial << std::endl;
    }

    return 0;
}