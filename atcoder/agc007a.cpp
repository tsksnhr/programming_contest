#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool dfs(ll H, ll W, vector<vector<char>> &graph, ll x, ll y, ll &cnt, ll target){

    cnt++;

    vector<ll> dx = {1, 0};
    vector<ll> dy = {0, 1};
    for (ll i = 0; i < 2; i++){
        ll nx = x + dx.at(i);
        ll ny = y + dy.at(i);

        if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
        if (graph.at(nx).at(ny) != '#') continue;

        bool flg = dfs(H, W, graph, nx, ny, cnt, target);
        if (flg) break;
    }

    if (target == cnt){
        return true;
    }
    else{
        cnt--;
        return false;
    }
}

int main(){

    ll H, W;
    cin >> H >> W;
    vector<vector<char>> graph(H, vector<char>(W));
    ll target = 0;
    for (ll i = 0; i < H; i++){
        for (ll j = 0; j < W; j++){
            cin >> graph.at(i).at(j);
            if (graph.at(i).at(j) == '#') target++; 
        }
    }

    ll cnt = 0;
    bool flg = dfs(H, W, graph, 0, 0, cnt, target);

    if (flg) cout << "Possible" << endl;
    else cout << "Impossible" << endl;
    return 0;
}