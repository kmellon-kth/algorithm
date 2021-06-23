#include <iostream>
using namespace std;

#include<string>

int main()
{
	int T;
	cin >> T;

	string s;
	while (T--) {
		cin >> s;
		int alpa = 1, psum=0;
		for (auto iter = s.begin(); iter != s.end(); iter++) {
			if (*iter == 'X') {
				alpa = 1;
				continue;
			}
			psum += alpa++;
		}
		cout << psum << endl;
	}
}