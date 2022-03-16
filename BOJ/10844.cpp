#include <iostream>
using namespace std;

int dp[101][11];

int main() {

	int n = 0;
	int result = 0;
	cin >> n;;

	for (int i = 1; i <= 9; i++) {// ÃÊ±âÈ­
		dp[1][i] = 1;
		if (n==1) result += dp[1][i];
	}

	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		if (i == n) result += dp[i][0];
		for (int j = 1; j <= 9; j++) {
			dp[i][j] =( dp[i - 1][j - 1] + dp[i - 1][j + 1])%1000000000;

			if (i == n)
				result =(result+ dp[i][j])%1000000000;

		}
	}

	cout << result;
	return 0;

}