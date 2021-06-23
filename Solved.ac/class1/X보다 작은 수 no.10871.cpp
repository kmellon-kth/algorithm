#include <iostream>
using namespace std;

int main()
{
	int num, size, cmp;
	cin >> size >> cmp;
	for (int i = 0; i < size; i++) {
		cin >> num;
		if (num < cmp) cout << num << ' ';
	}
}