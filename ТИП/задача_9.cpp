#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    // 1, если одно делится на другое; иначе 0
    cout << ((n % m == 0) || (m % n == 0)) << endl;
    
    return 0;
}