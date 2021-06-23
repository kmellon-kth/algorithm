#include <iostream>
using namespace std;

int reverse(int num) {
	int ret = 0;
	while (num) {
		ret *= 10;
		ret += num % 10;
		num /= 10;
	}
	return ret;
}

int main()
{
	long a, b;
	cin >> a >> b;
	a = reverse(a);
	b = reverse(b);
	cout << (a < b ? b : a);
}