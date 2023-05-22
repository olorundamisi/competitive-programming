#include <bits/stdc++.h>
 
#define INF 1E9 + 7
 
using namespace std;
 
int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
 
	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t res = 0;

		int64_t n, k; cin >> n >> k;
		vector<int64_t> A(n); for (auto &it : A) cin >> it;
		sort(A.begin(), A.end());
 
		int64_t p, q;
		p = 0, q = n - k;
 
		int64_t s = 0;
		for (int64_t i = p; i < q; ++i) s += A[i];
		res = s;
 
		for (int64_t i = 0; i < k; ++i) {
			s -= A[p] + A[p + 1];
			s += A[q];
			res = max(res, s);
			p += 2; q++;
		}
		cout << res << '\n';
	}
 
	return 0;
}
