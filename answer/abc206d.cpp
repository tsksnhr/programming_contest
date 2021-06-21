// KAIBUBsyo

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(vector<vector<int>> &graph, vector<bool> &used, int now){

    used.at(now) = true;

    for (auto next: graph.at(now)){
        if (used.at(next) == true) continue;
        dfs(graph, used, next);
    }

    return;
}

int main(){
    
    int N;
    cin >> N;
    vector<int> A(N);
    set<int> A_set;
    int A_max = 0;
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
        A_max = max(A_max, A.at(i));
        A_set.insert(A.at(i));
    }
    int A_kind = A_set.size();

    vector<int> B(N);
    B = A;
    reverse(B.begin(), B.end());
    if (A == B){
        cout << 0 << endl;
        return 0;
    }

    // max-size fo this graph is not N because a number in A may not be N.
    vector<vector<int>> graph(A_max);
    for (int i = 0; i < N; i++){
        int a, b;
        a = A.at(i);
        b = B.at(i);
        if (a != b){
            a--;
            b--;
            graph.at(a).push_back(b);
            graph.at(b).push_back(a);
        }
    }

    int cnt = 0;
    // max-size fo this array is not N because a number in A may not be N. 
    vector<bool> used(A_max, false);
    for (auto x: A_set){
        auto start = x;
        start--;

        if (used.at(start) == false){
            dfs(graph, used, start);
            cnt++;
        }
    }

    int ans = A_kind - cnt;
    cout << ans << endl;

    return 0;
}