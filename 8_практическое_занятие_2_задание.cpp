#include <iostream>
using namespace std;

// Рекурсивный НОД по алгоритму Евклида
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    setlocale(LC_ALL, "Russian");

    long long a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
    return 0;
}