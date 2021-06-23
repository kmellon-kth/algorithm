#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int max=0, psum=0;
	for (int i = 0; i < n; i++) {
		int cmp;
		cin >> cmp;
		psum += cmp;
		if (max < cmp) max = cmp;
	
	}

	double avg = ((double)psum / max *100)/n;
	cout.precision(5);
	cout << avg;
}