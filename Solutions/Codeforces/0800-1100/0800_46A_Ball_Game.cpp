#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t n; cin >> n;

	int64_t p = 1;
	for (int64_t i = 1; i < n; ++i) {
		p = (p + i) % n;

		cout << ((p == 0) ? n : p) << ' ';
	}
	cout << '\n';

	return 0;
}
