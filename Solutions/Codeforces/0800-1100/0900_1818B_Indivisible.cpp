#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n; cin >> n;

		if (n == 1) { cout << "1\n"; continue; }
		if (n > 2 && n % 2) { cout << "-1\n"; continue; }

		for (int64_t i = 1; i <= n; i += 2) {
			cout << i + 1 << ' ' << i << ' ';
		}
		cout << '\n';
	}

	return 0;
}
