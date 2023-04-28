#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n; cin >> n;

		bool f = false;
		int64_t z = 0;
		for (int64_t i = 0; i < n; ++i) {
			int64_t a; cin >> a;

			if (a == 0) ++z;
			else if (a >= 2) f = true;
		}

		if (z <= (n + 1) / 2) cout << "0\n";
		else if (f || z == n) cout << "1\n";
		else cout << "2\n";
	}

	return 0;
}
