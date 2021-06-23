#include <iostream>
using namespace std;

int main()

{
	int n;
	char sequence[101];

	cin >> n;
	cin.ignore();
	cin.getline(sequence, n + 1);

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += sequence[i] - '0';

	cout << sum;
}