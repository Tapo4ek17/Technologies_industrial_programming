#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    if (k < n * m && (k % n == 0 || k % m == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}