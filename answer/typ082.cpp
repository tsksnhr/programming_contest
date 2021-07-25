// Counting Numbers (star 3)
// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main(){

    ll L, R;
    cin >> L >> R;
    int L_digit = (to_string(L).size());
    int R_digit = (to_string(R).size());

    ll ans = 0;
    for (int i = L_digit; i <= R_digit; i++){
        if (i == L_digit){
            ll tmp = 10*(i);
            ans += (tmp - L)*i*L;
            ans %= MOD;
        }
        else if (i == R_digit){
            ll tmp = 10*(i - 1);
            ans += (R - tmp)*i*R;
            ans %= MOD;
        }
        else{
            ll ltmp = 10*(i - 1);
            ll rtmp = 10*i;
            ans += (rtmp - ltmp)*i*i;
            ans %= MOD;
        }
    }

    cout << ans << endl;
    return 0;
}