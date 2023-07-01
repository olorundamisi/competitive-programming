#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t sum = 0, x = 0;
		int64_t n; cin >> n;

		for (int64_t i = 0, q = 0; i < n; ++i) {
			int64_t a; cin >> a;
			sum += abs(a);

			if (a < 0 || (a == 0 && q == 1)) {
				if (q == 0) {
					q = 1;
				}
			} else {
				if (q == 1) {
					q = 0;
					x++;
				}
			}

			if (i + 1 == n && q == 1)
				++x;
		}
		cout << sum << ' ' << x << '\n';
	}

	return 0;
}
