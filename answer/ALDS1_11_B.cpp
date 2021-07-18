// Depth First Search

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void DFS(int N, vector<vector<int>> &graph, int pos, int &t_through, vector<int> &t_visit, vector<int> &t_back){

    if (t_visit.at(pos) == 0){
        t_through++;
        t_visit.at(pos) = t_through;
    }

    for (auto next: graph.at(pos)){
        if (t_visit.at(next) != 0) continue;
        DFS(N, graph, next, t_through, t_visit, t_back);
    }

    if (t_back.at(pos) == 0){
        t_through++;
        t_back.at(pos) = t_through;
    }
    
    return;
}

void AnsPrint(int N, vector<vector<int>> &graph, vector<int> &t_visit, vector<int> &t_back){

    for (int i = 0; i < N; i++){
        int node = i + 1;
        cout << node;
        cout << " " << t_visit.at(i);
        cout << " " << t_back.at(i);
        cout << endl;
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

    int t_through = 0;
    vector<int> t_visit(N);
    vector<int> t_back(N);
    for (int i = 0; i < N; i++){
        DFS(N, graph, i, t_through, t_visit, t_back);
    }

    AnsPrint(N, graph, t_visit, t_back);

    return 0;
}
