#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> b{0b01110010};
    std::cout << b << " (initial value)\n";

   for (int n = 0; n<=7; n++){
    b.flip(n);
    std::cout << b << std::endl;
   }
}