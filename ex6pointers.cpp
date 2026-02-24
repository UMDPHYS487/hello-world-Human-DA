#include <iostream>
using namespace std;

int y;
int *x;

int main() {
    y = 10;
    x = &y;
    
    cout << "Value of *x: " << *x << "\n";
    
    y = 20;
    
    cout << "Value of *x after changing y: " << *x << "\n";
    
    return 0;
}