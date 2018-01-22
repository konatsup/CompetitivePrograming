#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

vector<int> split(const string &str, char sep) {
    vector<int> v;
    stringstream ss(str);
    string buffer;
    while (getline(ss, buffer, sep)) {
        v.push_back(stoi(buffer));
    }
    return v;
}

int main() {
    string input, output;
    int i;
    vector<int>::iterator begin, end;

    getline(cin, input);
    output = "NO";

    vector<int> vkey = split(input, ' ');

    for (i = 0; i < 3; i++) {
        if (vkey[i] == 7) {
            vkey.erase(vkey.begin() + i);
            if ((vkey[0] == vkey[1]) && (vkey[0] == 5)) {
                output = "YES";
                break;
            }
            break;
        }
    }

    cout << output << endl;
    return 0;
}