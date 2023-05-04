#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t r = 1;
		
		string s; cin >> s;
		for (uint64_t i = 0; i < s.size(); ++i) {
			if (s[i] == '?')
				if (i == 0) r *= 9;
				else r *= 10;
		}

		if (s[0] == '0') cout << "0\n";
		else cout << r << '\n';
	}

	return 0;
}
