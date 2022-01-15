// Select +/- One (ster_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    vector<ll> B(N);
    for (int i = 0;i < N; i++) cin >> A.at(i);
    for (int i = 0;i < N; i++) cin >> B.at(i);

    ll dif = 0;
    for (int i = 0; i < N; i++) dif += abs(A.at(i) - B.at(i));

    bool is_ng = (K < dif);
    if (is_ng) cout << "No" << endl;
    else{
        ll k_dif = K - dif;
        if (k_dif%2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}