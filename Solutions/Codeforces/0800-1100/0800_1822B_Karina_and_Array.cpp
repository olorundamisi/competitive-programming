#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int64_t num_of_test_cases; cin >> num_of_test_cases;
	for (int64_t case_num = 1; case_num <= num_of_test_cases; ++case_num) {
		int64_t n; cin >> n;

		int64_t mx, my; cin >> mx >> my;
		if (my > mx) swap(mx, my);

		int64_t mn, mo; mn = my, mo = mx;

		for (int64_t i = 2; i < n; ++i) {
			int64_t a; cin >> a;

			if (a >= mx) { my = mx; mx = a; }
			else my = max(my, a);

			if (a <= mn) { mo = mn; mn = a; }
			else mo = min(mo, a);
		}

		cout << max(mx * my, mn * mo) << '\n';
	}

	return 0;
}
