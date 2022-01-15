#include <bits/stdc++.h>
using namespace std;

int K, X;
int ans;

int main(){

    cin >> K >> X;
    ans = 500*K;

    if (ans >= X){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}