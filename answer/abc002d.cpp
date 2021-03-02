#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

int main(){

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> relationship(N);
    for (ll i = 0; i < M; i++){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        relationship.at(x).push_back(y);
        relationship.at(y).push_back(x);
    }

    ll ans = -1;
    for (ll tmp = 0; tmp < (1 << N); tmp++){
        bitset<15> pattern(tmp);

        for (ll i = 0; i < N; i++){
            if ()
        }

    }

    cout << ans << endl;
    return 0;
}