#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n; cin >> n;

		int64_t a, p, q, f = 0; cout << '1';
		for (int64_t i = 0; i < n; ++i) {
			cin >>  a;
			if (i == 0) { p = q = a; continue; }

			if (a >= q && f == 0) {
				cout << '1';
				q = a;
			} else {
				if (a > p || (a < q && f == 1)) {
					cout << '0';
				} else {
					cout << '1';
					q = a;
					f = 1;
				}
			}
		}
		cout << '\n';
	}

	return 0;
}
