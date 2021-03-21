// dfs
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll H, ll W, vector<vector<char>> &townmap, vector<vector<bool>> &seen, ll x, ll y, vector<ll> &move_x, vector<ll> &move_y){

    seen.at(x).at(y) = true;

    ll dx, dy, new_x, new_y;
    for (ll i = 0; i < move_x.size(); i++){
        dx = move_x.at(i);
        dy = move_y.at(i);
        new_x = x + dx;
        new_y = y + dy;

        if ((new_x < 0) || (new_y < 0) || (new_x >= H) || (new_y >= W)) continue;
        if (townmap.at(new_x).at(new_y) == '#') continue;
        if (seen.at(new_x).at(new_y) == true) continue;

        dfs(H, W, townmap, seen, new_x, new_y, move_x, move_y);
    }

    return;
}

int main(){

    ll H, W;
    cin >> H >> W;
    vector<vector<char>> townmap(H);
    ll start_x, start_y;
    ll goal_x, goal_y;
    for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            char tmp;
            cin >> tmp;
            townmap.at(h).push_back(tmp);

            if (tmp == 's'){
                start_x = h;
                start_y = w;
            }
            if (tmp == 'g'){
                goal_x = h;
                goal_y = w;
            }
        }
    }

    vector<vector<bool>> seen(H, vector<bool>(W, false));
    vector<ll> move_x = {1, 0, -1, 0};
    vector<ll> move_y = {0, 1, 0, -1};

    dfs(H, W, townmap, seen, start_x, start_y, move_x, move_y);

    bool ans = false;
    if (seen.at(goal_x).at(goal_y) == true) ans = true;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}