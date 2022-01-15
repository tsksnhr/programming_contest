// Made up

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    map<ll, ll> A;
    vector<ll> B(N);
    map<ll, ll> C;
    for (int i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        A[tmp]++;
    }
    for (int i = 0; i < N; i++) cin >> B.at(i);
    for (int i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        tmp--;
        C[tmp]++;
    }

    ll ans = 0;
    for (int i = 0; i < N; i++){
        int val, pos;
        val = B.at(i);
        pos = i;

        if (A.count(val) && C.count(pos)){
            ans += A[val]*C[pos];
        }
    }

    cout << ans << endl;
    return 0;
}