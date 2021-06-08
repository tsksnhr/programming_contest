// Frog 2

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main(){

    ll N, K;
    cin >> N >> K;
    vector<ll> h(N);
    for (ll i = 0; i < N; i++) cin >> h.at(i);

    vector<ll> dp(N, INF);
    dp.at(0) = 0;
    for (ll i = 1; i < N; i++){
        
        ll buf = INF;           // 1e5 is not MAX-value because max answer is 9999*N
        for (ll j = 1; j <= K; j++){
            ll tmp = dp.at(i-j) + abs(h.at(i-j) - h.at(i));
            buf = min(buf, tmp);

            if (i == j) break;
        }
        dp.at(i) = buf;
    }

    cout << dp.back() << endl;
//    for (auto x: dp) cout << x << " ";
    return 0;
}

