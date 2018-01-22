#include <iostream>
//NotDone(20180122)
using namespace std;

int main() {
    int N;
    cin >> N;
    int data[100000][3] = {};
    data[0][0] = 0;
    data[0][1] = 0;
    data[0][2] = 0;
    string out = "No";
    for (int i = 0; i < N; i++) {
        cin >> data[i + 1][0] >> data[i + 1][1] >> data[i + 1][2];
    }
    for (int i = 0; i < N; i++) {
        if (abs(data[i + 1][0] - data[i][0]) >= abs(data[i + 1][1] + data[i + 1][2])) {
            if (abs(data[i][1] + data[i][2] + data[i + 1][1] + data[i + 1][2] + 100000) % 2
                == abs(data[i + 1][0] - data[i][0]) % 2) {
                out = "Yes";
            }
        }
    }
    cout << out << endl;
    return 0;
}