#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> B(n - 1); for (auto &b : B) cin >> b;

		cout << B[0] << ' ';
		for (int64_t i = 1; i < n - 1; ++i) {
			int64_t a = B[i - 1], b = B[i];
			cout << min(a, b) << ' ';
		}
		cout << B[n - 2] << '\n';
	}

	return 0;
}
