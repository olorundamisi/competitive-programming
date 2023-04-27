#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n; cin >> n;

		int64_t l, d; l = d = 0;
		for (int64_t i = 0; i < n; ++i) {
			int64_t a; cin >> a;

			if (a > 0) ++l;
			else ++d;
		}

		for (int64_t i = 1; i <= n; ++i) {
			if (i <= l) cout << i << ' ';
			else cout << (2 * l) - i << ' ';
		}
		cout << '\n';

		for (int64_t i = 1; i <= n; ++i) {
			if (i <= d * 2) cout << i % 2 << ' ';
			else cout << i - (d * 2) << ' ';
		}
		cout << '\n';
	}

	return 0;
}
