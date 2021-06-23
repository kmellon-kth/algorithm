#include <iostream>
using namespace std;

int main()
{
	int score;

	cin >> score;

	char judge;
	if (score >= 90) judge = 'A';
	else if (score >= 80) judge = 'B';
	else if (score >= 70) judge = 'C';
	else if (score >= 60) judge = 'D';
	else judge = 'F';

	cout << judge;
}