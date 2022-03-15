#include <iostream>
#include <vector>
using namespace std;


void stick(int x) {


	int stick_size = 64;
	int count = 0;
	int sum_size = 64;
	int temp = 0;

	while (true) {

		if (x == stick_size) {
			count = 1;
			break;
		}

		if (sum_size > x) {
			stick_size /= 2;


			temp = sum_size - stick_size;

			if (temp > x) {
				sum_size = temp;
			}
			else if (temp == x) {
				break;
			}

			if (stick_size <= x) count++;
		}


	}

	cout << count;
}

int main() {

	int x = 0;

	cin >> x;

	stick(x);

}