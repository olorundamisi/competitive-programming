#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		string s; cin >> s; int n = s.size();
		bool f = 1, g = 1;

		for (int i = (n / 2); i < n; ++i) {
			if (s[i] != s[n - i - 1])
				f = 0;
			if (s[i] != s[0])
				g = 0;
		}

		if (g) cout << "-1\n";
		else cout << n - (int)f << '\n';
	}

	return 0;
}

