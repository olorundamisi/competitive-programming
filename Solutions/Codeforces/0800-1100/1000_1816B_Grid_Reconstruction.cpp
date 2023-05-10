#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		int64_t a = 2 * n;
		for (int64_t i = 2; i <= n; i += 2) {
			cout << a << ' ' << i << ' ';
			a -= 2;
		}
		cout << '\n';

		a = n + 1;
		for (int64_t i = 1; i <= n; i += 2) {
			cout << i << ' ' << a << ' ';
			a += 2;
		}
		cout << '\n';
	}

	return 0;
}
