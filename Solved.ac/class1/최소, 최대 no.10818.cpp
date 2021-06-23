#include <iostream>
using namespace std;

int main()
{

	int min = (1<<31) - 1, max = 1<<31;
	int n;

	cin >> n;
	int num;
	while (n--) {
		cin >> num;
		if (num > max) max = num;
		if (num < min) min = num;
	}

	cout << min << ' ' << max;
}