#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e9;

void solver(int N, int  K, ll S, vector<ll> &ans){

    for(int i = 0; i < K; ++i){
        ans.at(i) = S;
    }
    if(S == (ll)1e9){
        for(int i = K; i < N; ++i){
            ans.at(i) = 1e9-1;
        }
    }
    return;
}

int main(){

    int N, K;
    ll S;
    cin >> N >> K >> S;

    vector<ll> ans(N, INF);
    solver(N, K, S, ans);

    for(int i = 0; i < N; ++i){
        cout << ans.at(i) << " "s;
    }
    cout << endl;

    return 0;
}
