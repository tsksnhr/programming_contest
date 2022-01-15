#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

void dfs(ll H, ll W, ll A, ll B, vector<vector<char>> &graph, ll x, ll y, ll &cnt){

    graph.at(x).at(y) = '#';
    cnt++;

    vector<ll> dx = {1, 0, -1, 0};
    vector<ll> dy = {0, 1, 0, -1};

    for (ll i = 0; i < 4; i++){
        ll nx = x + dx.at(i);
        ll ny = y + dy.at(i);

        if ((nx < 0) || (nx >= H) || (ny < 0) || (ny >= W)) return;
        if (graph.at(nx).at(ny) == '#') return;

        dfs(H, W, A, B, graph, nx, ny, cnt);
    }

    return;
}

int main(){

    ll H, W, A, B;
    cin >> H >> W >> A >> B;

    vector<vector<char>> graph(H, vector<char>(W, '.'));

}