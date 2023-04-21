#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int64_t res = 0;

	int64_t a = 1, b = 1;
	for (int64_t c = a + b; c < 4'000'000; c = a + b) {
		if (c % 2 == 0) res += c;
		a = b;
		b = c;
	}
	
	cout << res << '\n';

	return 0;
}
