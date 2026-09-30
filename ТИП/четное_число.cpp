#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int next = n + 2 - n % 2;
    
    cout << "Следующее чётное: " << next << endl;
    return 0;
}