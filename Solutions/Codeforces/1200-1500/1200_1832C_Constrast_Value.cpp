/* https://codeforces.com/problemset/problem/1832/C */

#include <bits/stdc++.h>
 
#define INF 1E9 + 7
 
using namespace std;
 
int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
 
	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(n);
		{
			// Create unsorted unique std::vector...
			for (auto &it : A) cin >> it;
			vector<int64_t>::iterator uniq = unique(A.begin(), A.end());
			A.resize(distance(A.begin(), uniq));
			n = A.size();
		}

		if (n == 1) { cout << "1\n"; continue; }

		int64_t res = 2;
		for (int64_t i = 1; i < n - 1; ++i) {
			if (A[i] < A[i - 1] && A[i + 1] < A[i] || A[i] > A[i - 1] && A[i + 1] > A[i])
				continue;
			++res;
		}

		cout << res << '\n';
	}
 
	return 0;
}
