#include <iostream>
using namespace std;

int main() {
    int h, a, b;
    cin >> h >> a >> b;
    
    int day = 0;
    int height = 0;
    
    while (true) {
        day++;
        height += a;
        if (height >= h) break;
        height -= b;
    }
    
    cout << day << endl;
    
    return 0;
}