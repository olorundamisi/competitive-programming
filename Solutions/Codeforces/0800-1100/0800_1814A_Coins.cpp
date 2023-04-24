#include <bits/stdc++.h>

#define INF 1E9 + 1

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n, k; cin >> n >> k;

		if (n % 2 == 0 || n % 2 == k % 2) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
