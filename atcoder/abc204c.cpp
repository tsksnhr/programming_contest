// Tour

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll N, ll M, vector<vector<ll>> &graph, vector<bool> &seen, ll pos, ll &ans){

    seen.at(pos) = true;
    ans++;

    for (auto next_pos: graph.at(pos)){
        if (seen.at(next_pos) == true) continue;
        else{
            dfs(N, M, graph, seen, next_pos, ans);
        }
    }
}

int main(){
    
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> graph(N);
    for (ll i = 0; i < M; i++){
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        graph.at(a).push_back(b);
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++){
        vector<bool> seen(N, false);
        dfs(N, M, graph, seen, i, ans);
    }
    
    cout << ans << endl;
    return 0;
}
