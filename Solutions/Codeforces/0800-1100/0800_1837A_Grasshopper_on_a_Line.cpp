#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t x, k; cin >> x >> k;

		if (x % k) cout << 1 << '\n' << x << '\n';
		else cout << 2 << '\n' << k + 1 << ' ' << x - (k + 1) << '\n';
	}

	return 0;
}
