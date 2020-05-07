//　幅優先探索

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int bfs(int x, int y);

const int INF = 1e6;

int H, W;
vector<vector<char>> area(20, vector<char>(20));

vector<int> dx = {1, -1, 0, 0};
vector<int> dy = {0, 0, 1, -1};
vector<vector<int>> st_distance(20, vector<int>(20));
int max_distance_s = 0;
int max_distance_g = 0;
int max_tmp = 0;

int main(){

    cin >> H >> W;
    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            cin >> area.at(i).at(j);
        }
    }

    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            max_tmp = bfs(i, j);

            if (max_tmp > max_distance_g){
                max_distance_g = max_tmp;
            }
        }
    }

    cout << max_distance_g << endl;
    return 0;
}

int bfs(int x, int y){

    queue<pair<int, int>> q;
    P p_tmp;

    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            st_distance.at(i).at(j) = INF;
        }
    }

    st_distance.at(x).at(y) = 0;
    q.push(P(x, y));

    while (q.size()){
        p_tmp = q.front();
        q.pop();

        for (int i=0; i<4; i++){
            int nx, ny;
            nx = p_tmp.first + dx.at(i);
            ny = p_tmp.second + dy.at(i);
            
            if ((0<=nx) && (nx<H) && (0<=ny) && (ny<W) && (st_distance.at(nx).at(ny) == INF) && (area.at(nx).at(ny) == '.') && (area.at(p_tmp.first).at(p_tmp.second) == '.')){
                q.push(P(nx, ny));
                st_distance.at(nx).at(ny) = st_distance.at(p_tmp.first).at(p_tmp.second) + 1;

                if (st_distance.at(nx).at(ny) > max_distance_s){
                    max_distance_s = st_distance.at(nx).at(ny);
                }
            }
        }
    }

    return max_distance_s;
}