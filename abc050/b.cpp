#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, sum = 0;
	int p[100], t[10000], x[10000];
	cin >> n;
	for (int i = 0; i < n ; i++) {
		cin >> t[i];
	}
	cin >> m;
	for (int i = 0; i < m ; i++) {
		cin >> p[i] >> x[i];
	}
	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n; j++) {
			sum += t[j];
		}
		cout << (sum - (t[p[i] - 1] - x[i]) ) << endl;
		sum = 0;
	}
	return 0;
}