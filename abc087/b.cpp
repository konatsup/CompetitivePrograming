#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, x, out = 0;
    cin >> a >> b >> c >> x;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (500 * i + 100 * j + 50 * k == x) {
                    out++;
                }
            }
        }
    }
    cout << out << endl;
//以下負の遺産
//    out = 0;
//    rest = 0;
//    cout << num << endl;
//    if(a!=0) {
//        for (int i = 0; i < a + 1; i++) {
////        num = i != 0 ? num % (10 * i) : num;
//            rest = i != 0 ? num % (10 * i) : rest;
//            num = i != 0 ? num / (10 * i) : num;
////            cout << "a:" << num << endl;
//            if (num == 1 && rest == 0) {
//                cout << "Anaka:" << num << endl;
//                out++;
//                num = x / 50;
//                break;
//            }
//            if (b != 0) {
//                for (int j = 0; j < b + 1; j++) {
//
//                    rest = j != 0 ? num % (2 * j) : rest;
//                    num = j != 0 ? num / (2 * j) : num;
////                    cout << "b:" << num << "j:" << j << endl;
//                    if (num == 1 && rest == 0) {
//                        cout << "Bnaka:" << num << endl;
//                        out++;
//                        num = x / 50;
//                        break;
//                    }
//                    if (c != 0) {
//                        for (int k = 0; k < c + 1; k++) {
////                num = k!=0?num / (1 + k):num;
//                            num = k != 0 ? num / k : num;
////                            cout << "c:" << num << endl;
//                            if (num == 1) {
//                                cout << "Cnaka:" << num << endl;
//                                out++;
//                                num = x / 50;
//                                num = i != 0 ? num % (10 * i) : num;
//                                cout << "Cnaka2:" << num << endl;
//                                break;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout << out << endl;
    return 0;
}
