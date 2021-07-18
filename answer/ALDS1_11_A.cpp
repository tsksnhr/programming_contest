// Graph

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void GraphPrint(int N, vector<vector<int>> &graph){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (j != 0) cout << " ";
            cout << graph.at(i).at(j);
        }
        cout << endl;
    }
    return;
}

int main(){

    int N;
    cin >> N;
    vector<vector<int>> graph(N, vector<int>(N, 0));
    for (int i = 0;  i< N; i++){
        int node, deg;
        cin >> node >> deg;
        node--;
        
        for (int j = 0; j < deg; j++){
            int next;
            cin >> next;
            next--;
            graph.at(node).at(next) = 1;
        }
    }

    GraphPrint(N, graph);
    
    return 0;
}
