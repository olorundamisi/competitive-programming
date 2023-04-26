#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t T; cin >> T;
	for (int64_t case_num = 1; case_num <= T; ++case_num) {

		vector<int64_t> A(10, 0);
		for (int64_t i = 0; i < 4; ++i) {
			char a; cin >> a;
			A[a - '0']++;
		}

		int64_t res = 4, m = *max_element(A.begin(), A.end());
		if (m == 4) res = -1;
		else if (m == 3) res = 6;

		cout << res << '\n';
	}

	return 0;
}
