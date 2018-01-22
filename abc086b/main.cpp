#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string a, b;
    int num;
    float x;
    cin >> a >> b;
    num = atoi((a + b).c_str());
    x = sqrt(num);

    if (ceil(x) == floor(x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}