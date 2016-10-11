#include <iostream>
using namespace std;

// a very clever algorithm!
int main()
{
	int arr[] = {2, -5, 3, -4, 6, 7, -9, 8, 7, 4, -8, 5, -6};
	int left = 0, right;
	int cur = 0, max = 0;
	for (int i = 0; i < 13; ++i) {
		cur += arr[i];
		if (cur > max) {
			max = cur;
			right = i;
		}
		if (cur < 0) {
			cur = 0;
			left = i + 1;
		}
	}
	cout << left << " " << right << endl;
	cout << max << endl;
	return 0;
}
