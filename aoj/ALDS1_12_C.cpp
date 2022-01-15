// Single Source Shortest Path 2

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 1 << 30;
const int NONE = 0;
const int PEND = 1;
const int DONE = 2;

void AnsPrint(vector<int> dist){

    for (int i = 0; i < dist.size(); i++){
        cout << i << " " << dist.at(i) << endl;
    }

    return;
}

void Dijkstra(int N, vector<vector<pair<int, int>>> weight){

    vector<int> dist(N, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq_dist;

    dist.at(0) = 0;
    pq_dist.push(make_pair(0, 0));

    while (true){

        if (pq_dist.empty()) break;

        int now_pos, now_dist;
        now_dist = pq_dist.top().first;
        now_pos = pq_dist.top().second;
        pq_dist.pop();

        for (auto np: weight.at(now_pos)){
            int next_dist = np.second;
            int next_pos = np.first;

            if (dist.at(now_pos) + next_dist < dist.at(next_pos)){
                dist.at(next_pos) = dist.at(now_pos) + next_dist;
                pq_dist.push(make_pair(dist.at(next_pos), next_pos));
            }
        }
    }

    AnsPrint(dist);
    return;
}

int main(){

    int N;
    cin >> N;
    vector<vector<pair<int, int>>> weight(N);

    for (int i = 0; i < N; i++){
        int node, deg;
        cin >> node >> deg;

        for (int j = 0; j < deg; j++){
            int tag, cost;
            cin >> tag >> cost;
            pair<int, int> tmp(tag, cost);
            weight.at(node).push_back(tmp);
        }
    }

    Dijkstra(N, weight);

    return 0;
}