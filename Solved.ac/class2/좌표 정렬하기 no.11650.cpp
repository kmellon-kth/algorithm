#include <iostream>
using namespace std;

void mergesort(int x[], int y[], int low, int high,int retX[], int retY[]){
    //base case
    if(low >= high) return;

    // divide
    int mid = (low + high)/2;

    // conquer
    mergesort(x,y,low,mid,retX,retY);
    mergesort(x,y,mid+1,high,retX,retY);

    // combine
    int idx1 = low, idx2 =mid+1, p=low;

    cout << '\n'<< high;
    while(p <= high){
        cout << '\n'<< idx1 << ' ' << idx2 << ' ' << p;
        if(idx1 > mid)
        {
            retX[p] = x[idx2];
            retY[p] = y[idx2++];
        }
        else if(idx2 > high)
        {
            retX[p] = x[idx1];
            retY[p] = y[idx1++];
        }
        else if((x[idx1] > x[idx2])|| (x[idx1] == x[idx2] && y[idx1] > y[idx2]))
        {
            retX[p] = x[idx2];
            retY[p] = y[idx2++];
        }
        else if((x[idx1] < x[idx2])|| (x[idx1] == x[idx2] && y[idx1] < y[idx2]))
        {
            retX[p] = x[idx1];
            retY[p] = y[idx1++];
        }

        cout << ' ' << retX[p] << ' ' << retY[p];
        p++;
    }

    // copying
    cout << "\n////////////////////////////\n" << "Range: " << low << '~' << high << '\n';
    for(int i=low; i<=high; i++){
        x[i] = retX[i];
        y[i] = retY[i];
        cout << x[i] << ' ' << y[i] << '\n';
    }
    cout << "////////////////////////////\n";
}

int main(){

    int n;
    cin >> n;

    int x[100001],y[100001],retX[100001],retY[100001];
    for(int i=0; i<n; i++) cin >> x[i] >> y[i];

    mergesort(x,y,0,n-1,retX,retY);

    for(int i=0; i<n; i++) cout << x[i] << ' ' << y[i] << '\n';

}
