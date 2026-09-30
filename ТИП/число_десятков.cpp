#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int tens = (n / 10) % 10;
    
    cout << "Число десятков: " << tens << endl;
    return 0;
}