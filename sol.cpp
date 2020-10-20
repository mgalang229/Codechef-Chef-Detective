#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<bool> v(n, false);
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp != 0) {
			v[tmp - 1] = true;
		}
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == false) {
			cout << i + 1 << " ";
		}
	}
	cout << '\n';
	return 0;
}
