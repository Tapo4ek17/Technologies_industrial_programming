#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char operation;
    long long result;
    
    cin >> A >> operation >> B;
    
    switch (operation) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
        default:
            return 1;
    }
    
    cout << result << endl;
    
    return 0;
}