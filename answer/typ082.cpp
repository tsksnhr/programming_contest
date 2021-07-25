// Counting Numbers (star 3)
// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll tiny_pow(ll a, ll x){

    ll ret = 1;
    for (int i = 0; i < x; i++) ret *= a;

    if (x == 0) ret = 1;
    return ret;
}

int main(){

    ll L, R;
    cin >> L >> R;
    int L_digit = (to_string(L).size());
    int R_digit = (to_string(R).size());
//    cerr << L_digit << " " << R_digit << endl;

    int ans = 0;
    for (int d = L_digit; d <= R_digit; d++){
        ll l, r, num, m;
        l = tiny_pow(10, d-1);
        r = tiny_pow(10, d) - 1;

        if (d == L_digit) l = L;
        if (d == R_digit) r = R;
//        cerr << l << " " << r << endl;

        num = r - l + 1;
        if (num%2 == 0) m = 0;
        else m = (l + r)/2;

        ll cnt = (((l+r)%MOD)*((num/2)%MOD) + m%MOD)%MOD;
        ans += (cnt*d)%MOD;
        ans %= MOD;
//        cerr << ans << endl;
    }

    cout << ans << endl;
    return 0;
}