#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n); for (auto &it : A) cin >> it;
		vector<int64_t> B(n); for (auto &it : B) cin >> it;

		int64_t p = 0, q = n - 1;
		while (A[p] == B[p]) ++p;
		while (A[q] == B[q]) --q;

		while (p > 0 && B[p - 1] <= B[p]) --p;
		while (q + 1 < n && B[q] <= B[q + 1]) ++q;

		cout << p + 1 << ' ' << q + 1 << '\n';
	}

	return 0;
}
