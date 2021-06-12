// Knapsack 1

#include <bits/stdc++.h>
using namespace std;
using  ll = long long;

int main(){

    ll N, W;
    cin >> N >> W;
    vector<ll> w(N);
    vector<ll> v(N);
    for (ll i = 0; i < N; i++) cin >> w.at(i) >> v.at(i);

    vector<vector<ll>> dp(N, vector<ll>(W+1, 0));
    dp.at(0).at(w.at(0)) = v.at(0);

    for (ll i = 1; i < N; i++){
        for (ll j = 0; j <= W; j++){
            dp.at(i).at(j) = max(dp.at(i-1).at(j), dp.at(i).at(j));
            if (j + w.at(i) <= W) dp.at(i).at(j + w.at(i)) = max(dp.at(i-1).at(j) + v.at(i), dp.at(i-1).at(j));
        }
    }
/*
    for (ll i = 0; i < N; i++){
        for (auto x: dp.at(i)) cerr << x << " ";
        cerr << endl;
    }
*/
    ll ans = 0;
    for (auto x: dp.back()) ans = max(ans, x);

    cout << ans << endl;
    return 0;
}