#include <bits/stdc++.h>

#define INF 1E9 + 7

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int64_t res = 0;

	int64_t a = 1, b = 1, c;
	do {
		c = a + b;
		res += c;
		a = b + c;
		b = c + a;
	} while (a + b < 4'000'000);
	
	cout << res << '\n';

	return 0;
}
