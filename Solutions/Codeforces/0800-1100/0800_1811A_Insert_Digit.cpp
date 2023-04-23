#include <bits/stdc++.h>

#define INF 1E9

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n, d; cin >> n >> d;
		string s; cin >> s;

		bool STATE = 0;
		for (int64_t i = 0; i < n; ++i) {
			if (STATE == 0 && s[i] - '0' < d) {
				cout << d;
				STATE = 1;
			}
			cout << s[i];
		}
		if (STATE == 0) cout << d;
		cout << '\n';
	}

	return 0;
}
