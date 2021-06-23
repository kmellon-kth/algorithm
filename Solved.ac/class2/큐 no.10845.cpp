#include <iostream>
using namespace std;

#include <string>

int main(){

    int n;
    cin >> n;

    int que[10001],f=0,b=0;
    while(n--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int x;
            cin >>x;
            que[b++] = x;
        }
        else if(cmd == "pop"){
            if(f==b) cout << -1 << '\n';
            else cout << que[f++] << '\n';
        }
        else if(cmd == "size"){
            cout << b-f  << '\n';
        }
        else if(cmd == "empty"){
            cout << (f==b?1:0) << '\n';
        }
        else if(cmd == "front"){
            if(f==b) cout << -1 << '\n';
            else cout << que[f] << '\n';
        }
        else if(cmd == "back"){
            if(f==b) cout << -1 << '\n';
            else cout << que[b-1] << '\n';
        }
    }
}
