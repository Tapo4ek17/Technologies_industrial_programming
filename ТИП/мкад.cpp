#include <iostream>
#include <cmath>       // для fmod
using namespace std;

int main() {
    double v, t;
    cout << "Enter speed: ";
    cin >> v;
    cout << "Enter time: ";
    cin >> t;
    
    double S = fmod(v * t, 109);   // остаток от деления на 109
    
    cout << "Отметка: " << S << " км" << endl;
    return 0;
}