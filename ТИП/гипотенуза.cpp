#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double a, b, c;      
    cout << "Enter first number a: ";
    cin >> a;
    cout << "Enter second number b: ";
    cin >> b;
    
    c = sqrt(a*a + b*b);
    
    cout << "Гипотенуза: " << c << endl;
    return 0;
}