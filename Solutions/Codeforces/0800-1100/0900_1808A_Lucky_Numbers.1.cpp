#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		pair<int64_t, int64_t> res = { 0 , 0 };

		int64_t l, r; cin >> l >> r;
		r = min(r, l + 100);

		while (l <= r) {
			int64_t mx = 0, mn = 9;
			int64_t s = l;
			while (s) {
				mx = max(mx, s % 10);
				mn = min(mn, s % 10);
				s /= 10;
			}

			if (mx - mn >= res.second) res = { l , mx - mn };
			if (mx - mn == 9) break;
			++l;
		}
		cout << res.first << '\n';
	}

	return 0;
}
