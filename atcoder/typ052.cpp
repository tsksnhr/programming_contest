// Dice Product (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){

    ll N; 
    cin >> N;

    ll ans = 1;
    for (ll i = 0; i < N; i++){
        ll buf = 0;
        for (ll i = 0; i < 6; i++){
            ll tmp = 0;
            cin >> tmp;
            buf += tmp;
        }
        ans *= buf;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}