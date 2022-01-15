#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> T(N);
    for (ll i = 0; i < N; i++) cin >> T.at(i);

    ll ans = T.at(0);
    for (ll i = 1; i < N; i++){
        ll tmp;
        tmp = T.at(i);

        ll tmp_gcd = __gcd(ans, tmp);
        ll buf = 0;
        buf = (max(ans, tmp)/tmp_gcd)*min(ans, tmp);
        ans = max(ans, buf);
    }

    cout << ans << endl;
    return 0;
}