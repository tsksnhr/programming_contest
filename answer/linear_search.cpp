// Linear Search
// ALDS1_4_A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<ll> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);
    int Q;
    cin >> Q;
    vector<ll> T(Q);
    for (int i = 0; i < Q; i++) cin >> T.at(i);

    ll cnt = 0;
    for (int j = 0; j < Q; j++){
        for (int i = 0; i < N; i++){
            if (S.at(i) == T.at(j)){
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}