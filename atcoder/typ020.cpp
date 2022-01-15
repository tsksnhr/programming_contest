//  Log Inequalilty (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll a, b, c;
    cin >> a >> b >> c;

    bool is_hold = false;
    ll left, right;

    left = a;
    right = c;
    for (int i = 0; i < b-1; i++) right *= c;
    
    if (a == 1) left = 0;
    if (c == 1) right = 0;

    cerr << left << " " << right << endl;

    is_hold = left < right;
    if (is_hold) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}