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
		n = unique(A.begin(), A.end()) - A.begin();

		int64_t res = n;

		for (int64_t i = 0; i + 2 < n; ++i) {
			res -= (A[i] < A[i + 1] && A[i + 1] < A[i + 2]);
			res -= (A[i] > A[i + 1] && A[i + 1] > A[i + 2]);
		}

		cout << res << '\n';
	}
 
	return 0;
}
