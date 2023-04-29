#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n, q; cin >> n >> q;
		vector<int64_t> A(n + 1), pref(n + 1, 0);

		for (int64_t i = 1; i <= n; ++i)  {
			cin >> A[i];

			pref[i] = pref[i - 1] + A[i];
		}

		for (int64_t i = 0; i < q; ++i) {
			int64_t l, r, k; cin >> l >> r >> k;

			int64_t sum = pref[n] - (pref[r] - pref[l - 1]) + (k * (r - l + 1));

			if (sum % 2 == 1) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}
