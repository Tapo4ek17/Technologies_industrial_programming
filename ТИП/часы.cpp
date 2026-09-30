#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int hours = n / 3600 % 24;
    int minutes = n % 3600 / 60;
    int seconds = n % 60;
    
    cout << hours << ":";
    if (minutes < 10) cout << "0";
    cout << minutes << ":";
    if (seconds < 10) cout << "0";
    cout << seconds << endl;
    
    return 0;
}