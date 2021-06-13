// 

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
    vector<ll> G_int(N_MAX, 0);
    for (ll i = 0; i < N; i++){
        cin >> A.at(i);
        G_int.at(i) = A.at(i) - i;
    }
    sort(A.begin(), A.end());

    for (ll i = 0; i < Q; i++){
        
    }

    return 0;
}