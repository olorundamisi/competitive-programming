#include <bits/stdc++.h>

#define INF 1E9

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		int64_t res = 0, c = 0;
		for (int64_t i = 0; i < n; ++i) {
			int64_t a; cin >> a;
			if (a == 0) ++c;
			else c = 0;

			res = max(res, c);
		}
		cout << res << '\n';
	}

	return 0;
}
