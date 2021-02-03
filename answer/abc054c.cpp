#include <bits/stdc++.h>
using  namespace std;

int main(){

    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph.at(a).push_back(b);
        graph.at(b).push_back(a);
    }

    vector<int> ref(N);
    for (int i = 0; i < N; i++) ref.at(i) = i;

    int road_cnt = 0, ans = 0;
    while (true){
        int pos = 0, ref_pos = 1;
        for (int i = 0; i < graph.at(pos).size(); i++){
            if (graph.at(pos).at(i) == ref.at(ref_pos)){
                road_cnt++;
                ref_pos++;
                pos = graph.at(pos).at(i);
                i = 0;

                if (ref_pos == N) break;
            }
        }
        if (road_cnt == N-1){
            ans++;
        }
        if (!next_permutation(ref.begin(), ref.end())) break;
        road_cnt = 0;
    }

    cout << ans << endl;
    return 0;
}