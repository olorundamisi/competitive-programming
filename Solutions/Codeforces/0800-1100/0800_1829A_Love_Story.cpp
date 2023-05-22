#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		string s, t; cin >> s;
		t = "codeforces";

		int n = 10, res = 0;

		for (int i = 0; i < n; ++i) {
			if (s[i] != t[i]) ++res;
		}

		cout << res << '\n';
	}

	return 0;
}
