// knapsack 2

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main(){

    ll N, W;
    cin >> N >> W;
    vector<ll> w(N+10, 0);
    vector<ll> v(N+10, 0);
    ll W_max = 0;
    ll V_max = 0;
    for (ll i = 0; i < N; i++){
        cin >> w.at(i) >> v.at(i);
        W_max += w.at(i);
        V_max += v.at(i);
    }

    vector<vector<ll>> dp(N+10, vector<ll>(V_max+10, W_max));
//    for (ll i = 0; i < N; i++) dp.at(0).at(v.at(i)) = 0;

    ll ans = -1;
    for (ll i = N; i >= 0; i--){
        for (ll j = V_max; j >= 0; j--){
            
            if (j - v.at(i) >= 0){
                dp.at(i).at(j - v.at(i)) = min(dp.at(i).at(j - v.at(i)), dp.at(i+1).at(j) - w.at(i));
            }
            
            dp.at(i).at(j) = min(dp.at(i).at(j), dp.at(i+1).at(j));

            if (dp.at(i).at(j) <= W) ans = max(ans, j);
        }
    }
/*
    for (ll i = 0; i < N; i++){
        for (auto x: dp.at(i)) cerr << x << ",";
        cerr << endl;
    }
*/
    cout << ans << endl;
    return 0;
}