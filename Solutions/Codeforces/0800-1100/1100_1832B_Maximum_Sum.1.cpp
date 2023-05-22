#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n, k; cin >> n >> k;
		vector<int64_t> A(n); for (auto &it : A) cin >> it;
		sort(A.begin(), A.end());

		int64_t res = 0;

		vector<int64_t> pref(n + 1, 0);
		for (int64_t i = 0; i < n; ++i) pref[i + 1] = pref[i] + A[i];

		for (int64_t i = 0; i < k + 1; ++i) {
			res = max(res, pref[n - (k - i)] - pref[2 * i]);
		}

		cout << res << '\n';
	}

	return 0;
}
