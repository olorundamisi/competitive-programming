#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;
		string s; cin >> s;

		int64_t it = 0, ti = n - 1;

		for (int64_t i = 0; i < n; ++i) {
			if (s[it] == s[ti] || it >= ti)
				break;
			it++, ti--;
		}
		cout << ti - it + 1 << '\n';
	}

	return 0;
}
