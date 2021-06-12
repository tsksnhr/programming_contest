// Knapsack 1

#include <bits/stdc++.h>
using namespace std;
using  ll = long long;

int main(){

    ll N, W;
    cin >> N >> W;
    vector<ll> w(N+10);
    vector<ll> v(N+10);
    for (ll i = 0; i < N; i++) cin >> w.at(i) >> v.at(i);

    vector<vector<ll>> dp(N+10, vector<ll>(W+10, 0));

    for (ll i = 0; i < N; i++){
        for (ll sum_w = 0; sum_w <= W; sum_w++){

            if (sum_w - w.at(i) >= 0) dp.at(i+1).at(sum_w) = max(dp.at(i+1).at(sum_w), dp.at(i).at(sum_w - w.at(i)) + v.at(i));

            dp.at(i+1).at(sum_w) = max(dp.at(i+1).at(sum_w), dp.at(i).at(sum_w));
        }
    }
/*
    for (ll i = 0; i < N; i++){
        for (auto x: dp.at(i)) cerr << x << " ";
        cerr << endl;
    }
*/
    cout << dp.at(N).at(W) << endl;
    return 0;
}