#include <iostream>

using namespace std;

int main() {
	int low[4], up[4];
	int max, count;

	for (int c = 0; c < 4; c++) {
		cin >> low[c] >> up[c];
	}

	for (int c = 0; c < 4; c++) {
		max = 0;
		for (int i = low[c]; i <= up[c]; i++) {
			int temp = i;
			count = 1;
			while (temp != 1) {
				if (temp % 2) temp = 3 * temp + 1;
				else temp /= 2;
				count++;
			}
			if (count > max) max = count;
		}
		cout << low[c] << " " << up[c] << " " << max << endl;
	}
}