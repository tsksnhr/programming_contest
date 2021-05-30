// AtCoder Condominium

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N, K;
    cin >> N >> K;

    ll ans = 0;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= K; j++){
            ll buf = 100*i + j;
            ans += buf;
        }
    }

    cout << ans << endl;
    return 0;
}