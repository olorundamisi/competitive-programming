#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n, k; cin >> n >> k;
		vector<string> A(n); for (auto &it : A) cin >> it;
		vector<int64_t> E(n, 1);

		int64_t res = n;
		for (int64_t i = 0; i < k; ++i) {
			for (int64_t j = 1; j < n; ++j) {
				if (E[j] == 0) continue;

				if (A[j][i] != A[0][i]) --res, E[j] = 0;
			}
		}

		cout << res << '\n';
	}

	return 0;
}
