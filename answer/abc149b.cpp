#include <bits/stdc++.h>
using namespace std;

long long a, b, k;
long long ans;

int main(){

    cin >> a >> b >> k;

    if ((a-k)<=0){
        if ((b-(k-a))>0){
            cout << 0 << " " << b-(k-a) << endl;
        }
        else{
            cout << 0 << " " << 0 << endl;
        }
    }
    else{
        cout << a-k << " " << b << endl;
    }
    return 0;
}