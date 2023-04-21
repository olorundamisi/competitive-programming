#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int res = 0;

		string s; cin >> s;
		for (uint64_t i = 0; i < s.size(); ++i) {
			if (i == 0) {
				if (s[i] == '_') res++;
				if (s.size() == 1) res++;
				continue;
			}
			if (s[i - 1] == '_' && s[i] == '_') {
				s[i - 1] = '^';
				res++;
				--i;
			}
			if (i + 1 == s.size()) {
				if (s[i] == '_') res++;
			}
		}

		cout << res << '\n';
	}


	return 0;
}
