// Colorful Blocks 2 (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll modpow(ll a, ll x, ll mod){

    ll ret = 1;
    while (x > 0){
        if (x & 1) ret = (ret*a)%mod;

        a = (a*a)%mod;

        x = (x >> 1);
    }

    return ret;
}

int main(){

    ll N, K;
    cin >> N >> K;
    
    if (N >= 3 && K <= 2){
        cout << 0 << endl;
        return 0;
    }

    ll ans = K;
    if (N > 1){
        ans *= K-1;
        ans %= MOD;
    }
    if (N > 2){
        ans *= modpow(K-2, N-2, MOD);
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}