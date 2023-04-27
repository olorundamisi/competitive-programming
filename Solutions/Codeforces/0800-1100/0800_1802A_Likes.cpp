#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n; cin >> n;

		int64_t x, y; x = y = 0;
		for (int64_t i = 0; i < n; ++i) {
			int64_t a; cin >> a;

			if (a > 0) ++x;
			else ++y;
		}

		int64_t c = 0, g = x, h = y;
		while (g--) { ++c; cout << c << ' '; }
		while (h--) { --c; cout << c << ' '; }
		cout << '\n';

		c = 0, g = x, h = y;
		while (g--) {
			++c;
			cout << c << ' ';
			if (h) {
				--h, --c;
				cout << c << ' ';
			}
		}
		cout << '\n';
	}


	return 0;
}
