#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int result = a * (a >= b) + b * (b > a);
    cout << result << endl;
    
    return 0;
}