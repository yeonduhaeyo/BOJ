#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][3];
int main() {

	int n = 0;
	int result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cin >> dp[i][0] >> dp[i][1] >> dp[i][2];

		if (i == 1) continue;

		dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] += min(dp[i-1][0], dp[i-1][1]);

	}

	result = min({ dp[n][0],dp[n][1],dp[n][2] });
	cout << result;


}