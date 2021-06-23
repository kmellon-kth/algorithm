#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	long long sig= a*b*c;
	int count[10] = { 0, };
	while (sig) {
		count[sig % 10]++;
		sig /= 10;
	}

	for (int x : count) cout << x << '\n';
}