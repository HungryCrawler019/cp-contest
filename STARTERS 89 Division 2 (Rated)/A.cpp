#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	int tcase; cin >> tcase;
	while (tcase--) {
		int n; cin >> n;
		if (n == 0) cout << 1 << "\n";
		else cout << 3 * n << "\n";
	}
	return 0;
}
