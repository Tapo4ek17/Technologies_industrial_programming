#include <iostream>
using namespace std;

long long fastPow(long long a, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n & 1) {
            result *= a;
        }
        a *= a;                 
        n >>= 1;                
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    long long a, n;
    cout << "Введите основание и показатель степени: ";
    cin >> a >> n;

    cout << a << "^" << n << " = " << fastPow(a, n) << endl;
    return 0;
}