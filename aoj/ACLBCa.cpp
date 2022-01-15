#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool dfs(vector<vector<ll>> &graph, vector<bool> &seen, ll pos){

    bool flg = false;
    seen.at(pos) = true;

    for (auto nv: graph.at(pos)){
        flg = true;
        if (seen.at(nv) == true) continue;

        dfs(graph, seen, nv);
    }

    return flg;
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
        graph.at(b).push_back(a);
    }

    vector<bool> seen(N, false);
    ll ans = 0;
    for (ll i = 0; i < N; i++){
        if (!seen.at(i)){
            ans++;
            dfs(graph, seen, i);
        }
    }
    ans--;

    cout << ans << endl;
    return 0;
}