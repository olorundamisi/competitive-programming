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

		for (int64_t i = 0; i < n; ++i) {
			for (int64_t j = i + 1; j < n; ++j) {
				if (s[i] == s[j]) {
					cout << s[j];
					i = j;
					break;
				}
			}
		}
		cout << '\n';
	}

	return 0;
}
