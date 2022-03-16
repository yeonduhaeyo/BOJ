#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001];
int arr[10001];

int main() {

	int n=0;
	int result = 0;
	int mida = 0, midb = 0;

	
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cin >> arr[i];
		if (i == 1) dp[i] = arr[i];
		else if (i == 2) dp[i] = arr[i] + arr[i - 1];
		else {

			mida = arr[i] + dp[i- 2];
			midb = arr[i] + arr[i - 1] + dp[i- 3];

			dp[i] = max({ mida,midb,dp[i - 1] });
			
			
		}

		if (result< dp[i]) result = dp[i];
	}

	cout << result;

	return 0;
}