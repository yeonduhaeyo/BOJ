#include <iostream>
using namespace std;

int arr[301];
int dp[301];

void stair(int t) {

	for (int i = 1; i <= t; i++) {

		cin >> arr[i];
		if (i == 1) dp[i] = arr[i];
		else if (i == 2) dp[i] = arr[i] + dp[i - 1];
		else {
			dp[i] = arr[i] + max(arr[i - 1] + dp[i - 3], dp[i - 2]);
		}

	}

	cout << dp[t];
}

int main() {

	int t;
	cin >> t;

	stair(t);
	return 0;

}