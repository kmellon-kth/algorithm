#include <iostream>
using namespace std;

int main()
{
	bool chek[42];
	fill(chek, chek + 42, true);

	int count = 0;
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		if (chek[tmp % 42]) {
			chek[tmp % 42] = false;
			count++;
		}
	}
	cout << count;
}