#include <iostream>
using namespace std;

// finish with the help of lv
int main()
{
	int cur = 0, min = 0, max = 0;
	int left, right;
	int arr[] = {2, -5, 4, 2, -6, -4, -2, 3, 8, 7, 2, -4, 7, -5};
	for (int i = 0; i < 14; ++i) {
		cur += arr[i];
		if (cur < min) {
			min = cur;
			left = i + 1;
		}
		if (cur - min > max) {
			max = cur - min;
			right = i;
		}
	}
	cout << left << " " << right << endl;
	cout << min << " " << max << endl;
	return 0;
}
