// AtCoder Ekiden (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<int> runners(N);
    vector<vector<int>> rap_times(N, vector<int>(N));
    for (int i = 0; i < N; i++){
        runners.at(i) = i;
        for (int j = 0; j < N; j++){
            cin >> rap_times.at(i).at(j);
        }
    }
    int M;
    cin >> M;
    vector<pair<int,int>> bad_relations(M);
    for (int i = 0; i < M; i++){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        bad_relations.at(i).first = l;
        bad_relations.at(i).second = r;
    }

    ll ans = 1e6;
    do{
        bool is_ok = true;
        ll buf = 0;
        for (int i = 0; i < N-1; i++){
            pair<int, int> change;
            change.first = min(runners.at(i), runners.at(i+1));
            change.second = max(runners.at(i), runners.at(i+1));

            for (int j = 0; j < M; j++){
                if (bad_relations.at(j) == change){
                    is_ok = false;
                    break;
                }
            }
            if (!is_ok) break;
        }

        if (is_ok){
            for (int i = 0; i < N; i++){
                buf += rap_times.at(runners.at(i)).at(i);
            }
            ans = min(ans, buf);
        }
    } while(next_permutation(runners.begin(), runners.end()));

    if (ans != 1e6) cout << ans << endl;
    else cout << -1 << endl;
    
    return 0;
}