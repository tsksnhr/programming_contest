#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    ll ans = 0, ans_buf = 0;
    for (int i = 0; i < N; i++){
        int x = A.at(i);
        for (int j = i; j < N; j++){
            x = min(x, A.at(j));
            ans_buf = x*(j-i+1);
            ans = max(ans, ans_buf);
        }
    }
    cout << ans << endl;
    return 0;
}