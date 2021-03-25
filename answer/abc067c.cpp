#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; i ++) cin >> a.at(i);

    ll sum = 0;
    for (ll i = 0; i < N; i++) sum += a.at(i);

    ll ans = 1e14;
    ll x = 0, y = sum;;
    for (ll i = 0; i < N-1; i++){
        ll tmp = a.at(i);
        x += tmp;
        y -= tmp;

        ll dif = abs(x - y);
        ans = min(dif, ans);
    }

    cout << ans << endl;
    return 0;
}