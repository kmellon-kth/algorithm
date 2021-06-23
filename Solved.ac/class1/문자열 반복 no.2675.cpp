#include <iostream>
using namespace std;

#include <string>

int main()
{
	int T;
	cin >> T;

	while (T--) {
		int r;
		string s;
		cin >> r >> s;
		for (auto iter = s.begin(); iter != s.end(); iter++) {
			for (int i = 0; i < r; i++)
				cout << *iter;
		}
		cout << endl;
	}
}