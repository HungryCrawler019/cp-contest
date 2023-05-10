#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	int tcase; cin >> tcase;
	while (tcase--) {
		int n; cin >> n;
		unordered_map<int, int> M;
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			M[x] = i;
		}
		int st = M[n], en = M[n];
		int ans = 1;
		for (int i = n; i > 1; i--) {
			st = min(st, M[i]);
			en = max(en, M[i]);
			if (n - i + 1 == en - st + 1) ans = max(ans, n - i + 1);
		}
		cout << ans << "\n";
	}
	return 0;
}
