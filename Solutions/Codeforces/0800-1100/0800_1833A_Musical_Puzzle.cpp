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

		set<string> M;
		for (int64_t i = 1; i < n; ++i) {
			M.insert(string() + s[i] + s[i - 1]);
		}

		cout << M.size() << '\n';
	}

	return 0;
}
