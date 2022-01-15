#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> P(N, 0);
    vector<int> Q(N, 0);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];

    vector<int> ref(N);
    for (int i = 0; i < N; i++){
        ref[i] = i+1;
    }

    int p_pos = 0, q_pos = 0;
    int cnt = 1;
    while (true){
        bool p_same_flg = true, q_same_flg = true;
        for (int i = 0; i < N; i++){
            if (P[i] != ref[i]) p_same_flg = false;
            if (Q[i] != ref[i]) q_same_flg = false;
        }

        if (p_same_flg) p_pos = cnt;
        if (q_same_flg) q_pos = cnt;

        cnt++;

        if (!next_permutation(ref.begin(), ref.end())) break;
    }

    cout << abs(p_pos - q_pos) << endl;
    return 0;
}