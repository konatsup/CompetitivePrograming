#include <iostream>

using namespace std;

int main() {
    int n, k, x, y, output = 0;
    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;

    if (n <= k) {
        output = n * x;
    } else {
        output = k * x;
        output += (n - k) * y;
    }
    cout << output << endl;

    return 0;
}