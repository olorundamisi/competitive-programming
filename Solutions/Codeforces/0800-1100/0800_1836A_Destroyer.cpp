#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		vector<int64_t> A(101, 0);
		int64_t a, mx = 0;
		for (int64_t i = 0; i < n; ++i) {
			cin >> a;
			++A[a];
			
			mx = max(mx, a);
		}

		int64_t res = 0;
		for (int64_t i = 1; i <= mx; ++i) {
			if (A[i] > A[i - 1]) ++res;

			if (res) break;
		}
		cout << (res ? "NO\n" : "YES\n");
	}

	return 0;
}
