// Breadth First Search

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void BFS(int N, vector<vector<int>> &graph, vector<int> &dist){

    dist.at(0) = 0;

    queue<int> que;
    que.push(0);

    while (!que.empty()){
        int pos = que.front();
        que.pop();
//        cerr << "pos = " << pos << endl;

        for (auto next: graph.at(pos)){
            if (dist.at(next) != -1) continue;
            
            que.push(next);
            dist.at(next) = dist.at(pos) + 1;
        }
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<vector<int>> graph(N);
    for (int i = 0;  i< N; i++){
        int node, deg;
        cin >> node >> deg;
        node--;
        
        for (int j = 0; j < deg; j++){
            int next;
            cin >> next;
            next--;
            graph.at(node).push_back(next);
        }
    }

    vector<int> dist(N, -1);
    BFS(N, graph, dist);

    for (int i = 0; i <N; i++){
        int node_id = i + 1;
        cout << node_id;
        cout << " " << dist.at(i);
        cout << endl;
    }

    return 0;
}