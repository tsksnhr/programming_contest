// Connected Components

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void DFS(int pos, vector<vector<int>> &graph, vector<int> &seen, int id){

    seen.at(pos) = id;

    for (auto next: graph.at(pos)){
        if (seen.at(next) != -1) continue;
        DFS(next, graph, seen, id);
    }

    return;
}

int main(){

    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; i++){
        int s, t;
        cin >> s >> t;
        graph.at(s).push_back(t);
        graph.at(t).push_back(s);
    }

    int Q;
    cin >> Q;
    vector<int> seen(N, -1);
    int group_id = 0;
    for (int i = 0; i < N; i++){
        if (seen.at(i) != -1) continue;
        DFS(i, graph, seen, group_id);
        group_id++;
    }

    for (int i = 0; i < Q; i++){
        int start, goal;
        cin >> start >> goal;

        if (seen.at(start) == seen.at(goal)) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
