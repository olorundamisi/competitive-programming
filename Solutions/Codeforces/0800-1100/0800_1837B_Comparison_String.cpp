#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t test_cases; cin >> test_cases;
	for (int64_t case_num = 1; case_num <= test_cases; ++case_num) {
		int64_t n; cin >> n;
		string s; cin >> s;

		int64_t res = 1, cur = 1;
		for (int64_t i = 1; i < n; ++i) {
			if (s[i] == s[i - 1]) ++cur;
			else cur = 1;

			res = max(res, cur);
		}
		cout << res + 1 << '\n';
	}

	return 0;
}
