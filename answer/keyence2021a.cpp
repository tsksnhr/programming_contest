#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    int N; 
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);

    for (int i = 0; i < N; i++) cin >> A.at(i);
    for (int i = 0; i < N; i++) cin >> B.at(i);

    ll max_in_A = 0, max_in_B = 0;
    int pos_max_in_A = 0;
    vector<ll> ans(N);
    int cnt = 0;
    for (int i = 0; i < N; i++){
        max_in_A = max(max_in_A, A.at(i));
            if (i == 0) ans.at(i) = max_in_A*B.at(i);
            else {
                if (ans.at(i-1) >= ans.at(i)) ans.at(i) = max(ans.at(i-1), max_in_A*B.at(i));
                else ans.at(i) = max(ans.at(i), max_in_A*B.at(i));
            }
    }

    for (int i = 0; i < N; i++) cout << ans.at(i) << endl;
    return 0;
}
