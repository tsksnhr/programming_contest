#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N; 
    cin >> N;
    vector<ll> a(N);
    ll min_val = 1e6;
    ll pos = -1;
    for (ll i = 0; i < N; i++){
        cin >> a.at(i);
    }

    ll ans = a.at(0);
    for (ll i = 1; i < N; i++){
        ans = __gcd(a.at(i), ans);
    }

    cout << ans << endl;
    return 0;
}