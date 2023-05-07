#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n); for (auto &a : A) cin >> a;
		sort(A.begin(), A.end());

		cout << max(A[0] * A[1], A[n - 1] * A[n - 2]) << '\n';
	}

	return 0;
}
