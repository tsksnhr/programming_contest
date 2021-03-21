#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll N, vector<vector<ll>> &graph, vector<bool> &seen, ll &time_stump, vector<ll> &in_time, vector<ll> &out_time, ll &pos){

    seen.at(pos) = true;
    time_stump++;
    in_time.at(pos) = time_stump;

    for (auto x: graph.at(pos)){
        if (seen.at(x) == true) continue;
        else dfs(N, graph, seen, time_stump, in_time, out_time, x);
    }
    time_stump++;
    out_time.at(pos) = time_stump;
    
    return;
}

int main(){

    ll N;
    cin >> N;
    vector<vector<ll>> graph(N);
    for (ll i = 0; i < N; i++){
        ll idx, outdegree;
        cin >> idx >> outdegree;
        idx--;

        for (ll j = 0; j < outdegree; j++){
            ll buf;
            cin >> buf;
            buf--;

            graph.at(idx).push_back(buf);
        }
    }

    vector<bool> seen(N, false);
    ll time_stump = 0;
    ll pos = 0;
    vector<ll> in_time(N, -1);
    vector<ll> out_time(N, -1);

    // Move start positions for loop and no-output point
    for (ll pos = 0; pos < N; pos++){
        if (seen.at(pos) == true) continue;
        else dfs(N, graph, seen, time_stump, in_time, out_time, pos);
    }

    for (ll i = 0; i < N; i++){
        ll idx = i + 1;
        cout << idx << " " << in_time.at(i) << " " << out_time.at(i) << endl;;
    }

    return 0;
}