#include <iostream>
using namespace std;

int main()
{
	int loc_alpa[26];

	fill(loc_alpa, loc_alpa + 26, -1);

	char word[102];
	cin.getline(word, 101);

	for (char* alpa = word; *alpa; alpa++) {
		int index = *alpa - 'a';
		if (loc_alpa[index] == -1) loc_alpa[index] = alpa - word;
	}

	for (int x : loc_alpa)
		cout << x << ' ';

}