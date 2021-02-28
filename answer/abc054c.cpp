#include <bits/stdc++.h>
using  namespace std;
using ll = long long;

void dfs(ll N, vector<bool> &seen, ll &cnt, ll &ans, vector<vector<ll>> graph, ll pos){

    if (cnt == N-1){
        ans++;
    }
    for (auto x: graph.at(pos)){
        if (seen.at(x) == true) continue;
        else{
            seen.at(x) = true;
            cnt++;
            dfs(N, seen, cnt, ans, graph, x);
        }
    }

    cnt--;
    seen.at(pos) = false;
    return;
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
    ll cnt = 0;

    seen.at(0) = true;
    dfs(N, seen, cnt, ans, graph, 0);
    
    cout << ans << endl;
    return 0;
}