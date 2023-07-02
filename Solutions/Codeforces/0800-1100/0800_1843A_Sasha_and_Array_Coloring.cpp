#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n); for (auto &a : A) cin >> a;
		sort(A.begin(), A.end());

		int64_t p = 0, q = n - 1, s = 0;
		for (int64_t i = 0; i * 2 < n; ++i) {
			s += A[q] - A[p];
			p++, q--;
		}

		cout << s << '\n';
	}


	return 0;
}
