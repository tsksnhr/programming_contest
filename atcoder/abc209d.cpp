// Collision

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool BFS(vector<vector<int>> &graph, int start, int goal, vector<int> &move_cost){

    move_cost.at(start) = 0;
    queue<int> que;
    que.push(start);

    while (!que.empty()){
        int spot = que.front();
        que.pop();

        for (auto new_spot: graph.at(spot)){
            if (move_cost.at(new_spot) != -1) continue;

            move_cost.at(new_spot) = move_cost.at(spot) + 1;
            que.push(new_spot);
        }
    }

    bool is_meet_in_town;
    if (move_cost.at(goal)%2 == 0) is_meet_in_town = true;
    else is_meet_in_town = false;

    return is_meet_in_town;
}

int main(){
    
    int N, Q;
    cin >> N >> Q;

    vector<vector<int>> graph(N);
    for (int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        graph.at(a).push_back(b);
        graph.at(b).push_back(a);
    }

//    vector<vector<int>> move_cost(N, vector<int>(N, -1));
    vector<int> move_cost(N, -1);
    for (int i = 0; i < Q; i++){
        int c, d;
        cin >> c >> d;
        c--;
        d--;

        bool is_need_search = true;
        bool is_meet_in_town = true;

        if (move_cost.at(c) != -1 && move_cost.at(c) != -1) is_need_search = false;

        if (is_need_search) is_meet_in_town = BFS(graph, c, d, move_cost);
        else {
            int dist = 0;
            dist = move_cost.at(d) - move_cost.at(c);
            
            if (dist%2 == 0) is_meet_in_town = true;
            else is_meet_in_town = false;
        }

        if (is_meet_in_town) cout << "Town" << endl;
        else cout << "Road" << endl;
    }

    return 0;
}