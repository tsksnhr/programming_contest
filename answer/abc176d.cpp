#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<int, int>;
const int INF = 1e6;

void solver(P const C, P const D, vector<vector<char>> const &area, vector<vector<int>> &mv){

    queue<P> q;
    P p_buf;
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    q.push(C);
    while(q.size()){
        p_buf = q.front();
        q.pop();

        for(int i = 0; i != 4; ++i){
            for(int j = 0; j != 4; ++j){
                int dir_x = p_buf.first + dx.at(i);
                int dir_y = p_buf.first + dy.at(i);

                if()
            }
        } 
    }


    return;
}

int main(){

    int H, W;
    cin >> H >> W;

    P C;
    P D;
    cin >> C.first >> C.second >> D.first >> D.second;

    vector<vector<char>> area(H, vector<char>(W));
    vector<vector<int>> mv(H, vector<int>(W));
    for(int h = 0; h != H; ++h){
        for(int w = 0; w != W; ++w){
            cin >> area.at(h).at(w);
            mv.at(h).at(w) = INF;
        }
    }


    return 0;
}