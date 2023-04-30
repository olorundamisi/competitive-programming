#include <bits/stdc++.h>

#define INF 1E6 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	vector<int64_t> N(INF);
	for (int64_t i = 1; i < INF; ++i) {
		string s = to_string(i);
		int64_t m = 0, n = 9;
		for (auto c : s) {
			if (c - '0' > m) m = c - '0';
			if (c - '0' < n) n = c - '0';
		}
		N[i] = m - n;
	}

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t l, r; cin >> l >> r;
		pair<int64_t, int64_t> res = { l, N[l] };

		if (r - l < 100) {
			while (l <= r) {
				if (N[l] > res.second)
					res = { l, N[l] };
				++l;
			}
			cout << res.first << '\n';
		} else {
			while (l++ <= r)
				if (l % 100 == 90) { cout << l << '\n'; break; }
		}
	}

	return 0;
}
