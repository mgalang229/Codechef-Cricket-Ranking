#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[6];
		for (int i = 0; i < 6; i++) {
			cin >> a[i];
		}
    // simply compare the statistics between player 'A' and 'B'
		int cnt = 0;
		for (int i = 0; i < 3; i++) {
			if (a[i] > a[i + 3]) {
				cnt++;
			}
		}
		cout << (cnt >= 2 ? 'A' : 'B') << '\n';
	}
	return 0;
}
