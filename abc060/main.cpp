#include <bits/stdc++.h>
using namespace std;
string a,b,c;
int main() { cin >> a>>b>>c; cout << ((a[a.size()-1] == b[0] && b[b.size()-1] == c[0])?"YES":"NO")<< endl; }