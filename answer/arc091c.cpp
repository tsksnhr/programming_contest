#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(ll N, ll M, ull &ans){

    if(N > 2){
        if(M > 2) ans = (N-2)*(M-2);
        else if(M == 2) ans = 0;
        else ans = N-2;
    }
    else if(N == 2) ans = 0;
    else{
        if(M > 2) ans = M-2;
        else if(M == 2) ans = 0;
        else ans = 1;
    }

    return;
}

int main(){

    ll N, M;
    cin >> N >> M;

    ull ans;
    solver(N, M, ans);

    cout << ans << endl;
    
    return 0;
}