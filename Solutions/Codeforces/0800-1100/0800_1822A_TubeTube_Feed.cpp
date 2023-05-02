#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n, t; cin >> n >> t;

		vector<int64_t> A(n, 0);
		for (int64_t i = 0; i < n; ++i) { int64_t a; cin >> a; A[i] += a + i; }
		vector<int64_t> B(n); for (auto &b : B) cin >> b;

		int64_t res = -2, mxb = 0;
		for (int64_t i = 0; i < n; ++i) {
			if (A[i] <= t && B[i] > mxb) {
				res = i;
				mxb = B[i];
			}

		}
		cout << res + 1 << '\n';
	}

	return 0;
}
