#include <iostream>
using namespace std;


int main() {

	int n;
	int count = 0;
	cin >> n;

	while (1) {

		if (n % 5 == 0) {
			count += n / 5;
			cout << count;
			break;
		}
		else {
			n -= 3;
			count++;
		}

		if (n < 0) {
			cout << -1;
			break;
		}
	}

	return 0;
}