// National Railway
// TODO: read editorial and solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e18;

int main(){

    ll H, W, C;
    cin >> H >> W >> C;
    vector<vector<ll>> A(H, vector<ll>(W));
    ll min_H, min_W, min_2nd_H, min_2nd_W, min_A = INF, min_2nd_A = INF;
    for (ll i = 0; i < H; i++){
        for (ll j = 0; j < W; j++){
            cin >> A.at(i).at(j);

            min_A = min(min_A, A.at(i).at(j));
            if (min_A == A.at(i).at(j)){
                min_H = i;
                min_W = j;
            }
        }
    }

    ll base = min_A;
    ll ans = INF;
    for (ll i = 0; i < H; i++){
        for (ll j = 0; j < W; j++){
            if (min_H == i && min_W == j) continue;

            ll ans_buf = base + A.at(i).at(j) + C*(abs(min_H - i) + abs(min_W - j));
            ans = min(ans_buf, ans);
        }
    }

    cout << ans << endl;
    return 0;
}