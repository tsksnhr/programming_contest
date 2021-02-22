#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll K;
    cin >> K;

    ll ans = 0;
    for (ll i = 1; i <= K; i++){
        for (ll j = 1; j <= K/i; j++){
            ll tmp = (K/i)/j;
            ans += tmp;
        }
    }

    cout << ans << endl;
    return 0;
}