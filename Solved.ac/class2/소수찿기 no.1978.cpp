#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt=0;
    while(n--){
        int num;
        cin>> num;

        if(num==1) continue;

        bool prime = true;
        for(int i=2; i*i<=num; i++) if(num%i==0) prime = false;
        if(prime) cnt++;
    }

    cout << cnt;
}
