// Large LCM (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll LARGE = 1e18;

int main(){

    ll A, B;
    cin >> A >> B;

    ll X = __gcd(A, B);
    
    ll a, b;
    a = A/X;
    b = B/X;

    ll thr = LARGE/X;
    thr /= b;
    bool is_large = a > thr;

    if (is_large) cout << "Large" << endl;
    else cout << a*b*X << endl;

    return 0;
}