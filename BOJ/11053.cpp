#include <iostream>
#include <vector>
using namespace std;

int main() {

	int a = 0;
	int result = 1;

	cin >> a;

	vector<int> arr(a);
	vector<int> dp(a);

	for (int i = 0; i < a; i++) {

		cin >> arr[i];
		if (i == 0) {
			dp[i] = 1;
			continue;
		}

		int max = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (max < dp[j]) max = dp[j];
				
			}
		}
		
		dp[i] = max + 1;

		if (dp[i] > result) result = dp[i];

	}

	cout << result;

	return 0;

}