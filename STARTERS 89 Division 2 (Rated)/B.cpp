#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	int tcase; cin >> tcase;
	while (tcase--) {
		int n; cin >> n;
		long long ans = 0;
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			if (x > 0) ans += i;
			else ans -= i;
		}
		cout << abs(ans) << "\n";
	}
	return 0;
}
