#include <iostream>
using namespace std;

int main()
{
	int cmp;
	bool order = true, deorder = true;
	for (int i = 1; i <= 8; i++) {
		cin >> cmp;
		if (cmp != i) order = false;
		if (cmp != 9 - i) deorder = false;
	}

	if (order) cout << "ascending";
	else if (deorder) cout << "descending";
	else cout << "mixed";
}