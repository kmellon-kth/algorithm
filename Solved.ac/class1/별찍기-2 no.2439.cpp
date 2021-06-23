#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) cout << ((size - 1 - i > j) ? ' ' : '*');
		cout << '\n';
	}

}