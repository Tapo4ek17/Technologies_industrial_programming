#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double sum = X;
    int day = 1;

    while (sum < Y) {
        sum = sum * 1.1;
        day++;
    }

    cout << day << endl;
    return 0;
}