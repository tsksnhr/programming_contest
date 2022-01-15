#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; i++) cin >> a.at(i);

    ll ans = 1e18;
    for (ll i = -150; i <= 150; i++){
        ll buf = 0;

        for (ll j = 0; j < N; j++){
            ll tmp = (i - a.at(j))*(i - a.at(j));
            buf += tmp;
        }
        ans = min(ans, buf);
    }

    cout << ans << endl;
    return 0;
}