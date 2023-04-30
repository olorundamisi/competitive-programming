#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t a, b, c; cin >> a >> b >> c;

		if (a + b == c) cout << "+\n";
		else cout << "-\n";
	}

	return 0;
}
