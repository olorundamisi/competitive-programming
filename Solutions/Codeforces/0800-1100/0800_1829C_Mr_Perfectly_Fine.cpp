#include <bits/stdc++.h>

#define INF 1E18 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		map<string, int64_t> M;
		M["00"] = M["01"] = M["10"] = M["11"] = INF;

		for (int64_t i = 0; i < n; ++i) {
			int64_t m; string s; cin >> m >> s;

			M[s] = min(M[s], m);
		}
		int64_t res = min(M["11"], M["01"] + M["10"]);
		cout << ((res == INF) ? -1 : res) << '\n';
	}

	return 0;
}
