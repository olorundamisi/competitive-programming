#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n); for (auto &it : A) cin >> it;
		vector<int64_t> B(n); for (auto &it : B) cin >> it;
		vector<int64_t> C(n); for (auto &it : C) cin >> it;

		vector<int64_t> R(n, 0);
		for (int64_t i = 0; i < n; ++i) {
			if (A[i] != R[(i + n - 1) % n] && A[i] != R[(i + n + 1) % n])
				R[i] = A[i];
			else if (B[i] != R[(i + n - 1) % n] && B[i] != R[(i + n + 1) % n])
				R[i] = B[i];
			else if (C[i] != R[(i + n - 1) % n] && C[i] != R[(i + n + 1) % n])
				R[i] = C[i];
		}
		for (auto it : R) cout << it << ' ';
		cout << '\n';
	}


	return 0;
}
