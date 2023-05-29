#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n, k; cin >> n >> k;
		string s[n];

		int64_t res = n;
		for (int64_t i = 0; i < n; ++i) {
			cin >> s[i];

			if (s[i] != s[0])
				res--;
		}
		cout << res << '\n';
	}

	return 0;
}
