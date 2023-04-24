#include <bits/stdc++.h>

#define INF 1E9 + 1

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n, k; cin >> n >> k;
		bool RES = 0;

		for (int64_t x = 0; x <= 1; ++x) {
			if (n - (k * x) >= 0 && (n - (k * x)) % 2 == 0) {
				RES = 1;
				break;
			}
		}
		cout << (RES == 1 ? "YES\n" : "NO\n");
	}

	return 0;
}
