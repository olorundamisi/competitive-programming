#include <bits/stdc++.h>

#define INF 1E9

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t a, b; cin >> a >> b;

		cout << 2 << '\n';
		cout << a - 1 << ' ' << 1 << '\n';
		cout << a << ' ' << b << '\n';
	}


	return 0;
}
