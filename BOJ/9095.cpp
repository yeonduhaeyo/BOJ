#include <iostream>
using namespace std;

int dp[11];

int sum123(int x) {

	
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= x; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	cout << dp[x]<<endl;

	return 0;

}

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int x = 0;
		cin >> x;

		sum123(x);
	}
	

}