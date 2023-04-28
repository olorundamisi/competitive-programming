#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {
		int64_t n; cin >> n;
		vector<int64_t> A(27, 0), B(27, 0);

		bool res = 1;
		for (int64_t i = 0; i < n; ++i) {
			char a; cin >> a;

			if (B[a - 'a'] == 0 && A[a - 'a'] == 0) A[a - 'a'] = i % 2;
			else if (A[a - 'a'] != i % 2) res = 0;

			++B[a - 'a'];
		}
		cout << (res ? "YES\n" : "NO\n");
	}

	return 0;
}
