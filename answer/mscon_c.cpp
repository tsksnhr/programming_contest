#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){

    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    vector<string> ans(N);

    int pos;
    bool flg = true;
    for(pos = K; pos<N; pos++){
        if(A.at(pos-K)>=A.at(pos)) ans.at(pos) = "No";
        else ans.at(pos) = "Yes";
    }

    for(int i=K; i<N; i++) cout << ans.at(i) << endl;
    return 0;
}