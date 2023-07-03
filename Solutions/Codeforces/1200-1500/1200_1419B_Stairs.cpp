#include <bits/stdc++.h>
 
#define INF 1E18 + 1
 
using namespace std;
 
int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t sq = 2;
	vector<int64_t> A = { 1 };
	for (int64_t i = 1; i <= INF; i++, sq *= 2) {
		int64_t a = (2 * A[i - 1]) + (sq * sq);
		A.push_back(a);

		if (a > INF) break;
	}

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t x; cin >> x;

		int64_t res = 0;
		for (uint64_t i = 0; i < A.size(); ++i) {
			x -= A[i];
			if (x < 0) break;
			res++;
		}
		cout << res << '\n';
	}
 
	return 0;
}
