// Minimum Spanning Tree

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 1 << 30;
const int NONE = 0;
const int PEND = 1;
const int DONE = 2;

void GetMST(int N, vector<vector<int>> &weight, int &ans){

    vector<int> min_weight(N, INF);
    vector<int> state(N, NONE);
//    vector<int> parent(N, -1);

    min_weight.at(0) = 0;
//    parent.at(0) = -1;

    while (true){
        int min_buf = INF;
        int now, next;

        // get minimum weight
        for (int i = 0; i < N; i++){
            if (state.at(i) != DONE && min_weight.at(i) < min_buf){
                min_buf = min_weight.at(i);
                now = i;
            }
        }

        if (min_buf == INF) break;

        // get done node
        state.at(now) = DONE;

        // get pending node
        for (int i = 0; i < N; i++){
            if (state.at(i) != DONE && weight.at(now).at(i) != -1 && weight.at(now).at(i) < min_weight.at(i)){
                min_weight.at(i) = weight.at(now).at(i);
//                parent.at(i) = now;
                state.at(i) = PEND;
            }
        }
    }

    for (auto x: min_weight) ans += x;
    return;
}

int main(){

    int N; 
    cin >> N;
    vector<vector<int>> weight(N, vector<int>(N));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> weight.at(i).at(j);
        }
    }

    int ans = 0;
    GetMST(N, weight, ans);

    cout << ans << endl;
    return 0;
}