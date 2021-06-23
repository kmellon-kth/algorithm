#include <iostream>
using namespace std;

int main(){
	char word[1000001];
	cin.getline(word, 1000001);

	int count[26] = { 0, };
	for (char* alpa = word; *alpa; alpa++) {
		if ('a' <= *alpa && *alpa <= 'z') count[*alpa - 'a']++;
		else count[*alpa - 'A']++;
	}

	int first = -1, second = -1, loc;
	for (int i = 0; i < 26; i++) {
		if (first < count[i]) {
			second = first;
			first = count[i];
			loc = i;
		}
		else if (second < count[i]) second = count[i];
	}
	cout << (char)(first == second ? '?' : ('A' + loc));
}