#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t res = 1;

		int64_t k; cin >> k;
		for (int64_t i = 1; i <= k; ++i) {
			if (i % 3 == 0 || i % 10 == 3)
				++k;

			if (i == k) {
				res = i;
				break;
			}
		}

		cout << res << '\n';
	}


	return 0;
}
