#include <bits/stdc++.h>

#define INF 1E9

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		for (int64_t i = 0; i < n; ++i) {
			char a, c; cin >> a;
			if (i == 0) { c = a; continue; }

			if (a == '0')
				cout << '+';
			else {
				if (c - '0'){
					cout << '-';
					c--;
				} else {
					cout << '+';
					c++;
				}
			}
		}
		cout << '\n';
	}

	return 0;
}
