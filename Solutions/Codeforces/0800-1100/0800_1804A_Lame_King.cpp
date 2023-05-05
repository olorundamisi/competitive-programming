#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t res = 0;
		int64_t a, b; cin >> a >> b;

		a = abs(a); b = abs(b);
		res = a + b + abs(a - b);
		if (a != b) res--;

		cout << res << '\n';
	}

	return 0;
}
