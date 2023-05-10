#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	
	int tcase; cin >> tcase;
	while (tcase--) {
		long long n, m, k; cin >> n >> m >> k;
		long long s1 = 0, s2 = 0;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			s1 += x;
		}
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			s2 += x;
		}
		if (k == 1) {
			cout << -1 << "\n";
			continue;
		}
		long long st = 0, en = 1e17;
		auto f = [&](long long x) {
			__int128 up = n * s2 - m * s1 + (__int128)x * (-k * m + s2);
			__int128 down = (__int128)x * (k - 1) + s1 - n;
			if (up < 0) return (__int128)x;
			if (down == 0) return (__int128)LLONG_MAX;
			return (__int128)x + up / down + 1;
		};
		for (int times = 0; times < 300; times++) {
			long long mid1 = (st * 2 + en) / 3;
			long long mid2 = (st + en * 2) / 3;
			if (f(mid1) < f(mid2)) en = mid2;
			else st = mid1;
		}
		long long ans = LLONG_MAX;
		for (int i = max(0LL, st-2); i <= en + 2; i++) ans = min<long long>(ans, f(i));
		cout << ans << "\n";
	}
	return 0;
}
