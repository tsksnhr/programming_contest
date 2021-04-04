#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

void solver(ll N, ll K, vector<vector<ll>> &move_time, ll &ans){

    vector<ll> target;
    for (ll i = 1; i < N; i++) target.push_back(i);

    while (true){
        ll total_time = 0;
        total_time += move_time.at(0).at(target.at(0));
        for (ll i = 0; i < target.size()-1; i++){
            total_time += move_time.at(target.at(i)).at(target.at(i+1));
        }
        total_time += move_time.at(target.at(target.size()-1)).at(0);

        if (total_time == K) ans++;

        if (!next_permutation(target.begin(), target.end())) break;
    }
}

int main(){

    ll N, K; 
    cin >> N >> K;
    vector<vector<ll>> move_time(N, vector<ll>(N));
    for (ll i = 0; i < N; i++){
        for (ll j = 0; j < N; j++){
            ll tmp;
            cin >> tmp;
            move_time.at(i).at(j) = tmp;
        }
    }

    ll ans = 0;
    solver(N, K, move_time, ans);

    cout << ans << endl;
    return 0;
}