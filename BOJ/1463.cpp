#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000000];

int main() {

	int x = 0;;
	cin >> x;

	dp[1] = 0;
	dp[2] = dp[3] = 1;

	for (int i = 4; i <= x; i++) {

		if (i % 2 == 0 && i % 3 != 0)
			dp[i] = min({ dp[i / 2], dp[i - 1] }) + 1;
		else if (i % 2 != 0 && i % 3 == 0)
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		else if (i % 2 == 0 && i % 3 == 0)
			dp[i] = min({ dp[i / 2], dp[i / 3], dp[i - 1] }) + 1;
		else
			dp[i] = dp[i - 1] + 1;

	}

	cout << dp[x];

	return 0;
	
}