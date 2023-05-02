#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n, k; cin >> n >> k;

		int64_t p = 0;
		for (int64_t i = 1; i <= n; ++i) {
			int64_t a; cin >> a;

			if (a % k != i % k) ++p;
		}
		if (p == 0) cout << "0\n";
		else if (p == 2) cout << "1\n";
		else cout << "-1\n";
	}

	return 0;
}
