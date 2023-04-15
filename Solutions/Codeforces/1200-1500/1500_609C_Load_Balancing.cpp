#include <bits/stdc++.h>
 
#define INF 1E9 + 7
 
using namespace std;
 
int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t res = 0;
 
	int64_t n; cin >> n;
	vector<int64_t> A(n); for (auto& a : A) cin >> a; sort(A.rbegin(), A.rend());
	int64_t s = accumulate(A.begin(), A.end(), 0);
 
	int64_t q = s / n, r = s % n;
	for (int64_t i = 0; i < n; ++i) {
		int64_t a = A[i], b = q;
		if (r) ++b, --r;
 
		if (a < b) swap(a, b);
		res += a - b;
	}

	cout << res / 2 << '\n';
 
	return 0;
}
