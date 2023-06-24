#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t n, s = 0; cin >> n;
	vector<int64_t> A(n); for (auto &a : A) { cin >> a; s += a; }

	int64_t i = 0, j = n - 1;
	int64_t p, q; p = q = 0;
	while (s) {
		if (p <= q) {
			p += A[i];
			s -= A[i];
			++i;
		} else {
			q += A[j];
			s -= A[j];
			--j;
		}
		if (i > j) break;
	}
	cout << i << ' ' << n - i << '\n';

	return 0;
}
