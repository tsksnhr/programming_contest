// Single Source Shortest Path 1

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 1 << 30;
const int NONE = 0;
const int PEND = 1;
const int DONE = 2;

void AnsPrint(vector<int> &dist){

    for (int i = 0; i < dist.size(); i++){
        cout << i << " " << dist.at(i) << endl;
    }

    return;
}

void Dijkstra(int N, vector<vector<int>> &weight){

    vector<int> dist(N, INF);
    vector<int> state(N, NONE);
    int min_dist;
    int now;

    dist.at(0) = 0;
    
    while (true){

        min_dist = INF;
        for (int i = 0; i < N; i++){
            if (state.at(i) != DONE && dist.at(i) < min_dist){
                min_dist = dist.at(i);
                now = i;
            }
        }

        if (min_dist == INF) break;

        state.at(now) = DONE;

        for (int i = 0; i < N; i++){
            if (state.at(i) != DONE && weight.at(now).at(i) != -1){
                if (dist.at(now) + weight.at(now).at(i) < dist.at(i)){
                    dist.at(i) = dist.at(now) + weight.at(now).at(i);
                    state.at(i) = PEND;
                }
            }
        }
    }

    AnsPrint(dist);

    return;
}

int main(){

    int N;
    cin >> N;
    vector<vector<int>> weight(N, vector<int>(N, -1));
    for (int k = 0; k < N; k++){
        int node, deg;
        cin >> node >> deg;

        for (int i = 0; i < deg; i++){
            int tag, cost;
            cin >> tag >> cost;
            weight.at(node).at(tag) = cost;
        }
    }

    Dijkstra(N, weight);

    return 0;    
}
