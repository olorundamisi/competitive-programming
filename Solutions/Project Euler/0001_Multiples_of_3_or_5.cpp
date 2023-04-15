#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int64_t res = 0;

	for (int64_t i = 1; i < 1000; ++i) {
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	
	cout << res << '\n';

	return 0;
}
