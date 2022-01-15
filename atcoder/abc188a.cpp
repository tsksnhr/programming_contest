#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    int X, Y;
    cin >> X >> Y;

    int dif;
    dif = abs(X-Y);

    if (dif < 3){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}