#include <iostream>
using namespace std;

#include <string>

int main()
{
	string s;

	getline(cin, s, '\n');

	int cnt = 0;
	bool sw = true;
	for (auto iter = s.begin(); iter != s.end(); iter++) {
		if (*iter == ' ')
			sw = true;
		else if (sw) {
			cnt++;
			sw = false;
		}
	}

	cout << cnt;
}