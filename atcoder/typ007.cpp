// CP Classes (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    sort(A.begin(), A.end());

    int Q; 
    cin >> Q;
    vector<ll> B(Q);
    for (int i = 0; i < Q; i++) cin >> B.at(i);

    vector<ll> ans(Q);
    for (int i = 0; i < Q; i++){
        auto iter = lower_bound(A.begin(), A.end(), B.at(i));
        int idx = iter - A.begin();
//        cerr << idx << endl;

        ll dif;
        if (idx == 0) dif = abs(B.at(i) - A.at(idx));
        else if (idx == N) dif = abs(B.at(i) - A.at(N-1));
        else dif = min(abs(B.at(i) - A.at(idx)), abs(abs(B.at(i) - A.at(idx-1))));
        ans.at(i) = dif;
    }

    for (auto x: ans) cout << x << endl;

    return 0;
}