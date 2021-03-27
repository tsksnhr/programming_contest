#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll a, b, c;
    cin >> a >> b >> c;

    ll left = 0, right = 0;
    left = 4*a*b;
    right = c*c - 2*c*(a + b) + (a + b)*(a + b);

    bool flg;
    if (c > a + b) flg = left < right;
    else flg = false;

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}