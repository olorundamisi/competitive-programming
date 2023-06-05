#include <bits/stdc++.h>

#define INF 1E9

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n); for (auto &it : A) cin >> it; sort(A.begin(), A.end());

		int64_t r = 1;
		for (int64_t i = 1; i < n; ++i) {
			int64_t b = A[i];
			if (b % 2 != A[0] % 2)
				b -= A[0];
			if (b % 2 != A[0] % 2) {
				r = 0;
				break;
			}
		}
		cout << (r ? "YES\n" : "NO\n");
	}

	return 0;
}
