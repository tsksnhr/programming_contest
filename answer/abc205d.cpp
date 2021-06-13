// Kth Excluded

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N_MAX = 1e5+10;
const ll Q_MAX = 1e5+10;
const ll INF = 1e18+9;

int main(){

    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N_MAX, INF);
    vector<ll> G_int(N_MAX, INF);
    for (ll i = 0; i < N; i++){
        cin >> A.at(i);
        G_int.at(i) = A.at(i) - (i + 1);
    }

    for (ll i = 0; i < Q; i++){
        ll K;
        cin >> K;

        if (G_int.at(N-1) < K){
            ll ans = A.at(N-1) + (K - G_int.at(N-1));
            cout << ans << endl;
        }
        else{
            auto iter = lower_bound(G_int.begin(), G_int.end(), K);
            ll pos = distance(G_int.begin(), iter);
//            cerr << "pos = " << pos << endl;

            ll ans = (A.at(pos) - 1) - (G_int.at(pos) - K);
            cout << ans << endl;
        }
    }

    return 0;
}