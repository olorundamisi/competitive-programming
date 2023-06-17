#include <bits/stdc++.h>

#define INF (1E9 + 1)

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		int64_t mx = INT_MIN, mn = INT_MAX;

		for (int64_t i = 0; i < n; ++i) {
			int64_t a; cin >> a;

			mx = max(a, mx);
			mn = min(a, mn);
		}

		if (mn < 0) cout << mn << '\n';
		else cout << mx << '\n';
	}

	return 0;
}
