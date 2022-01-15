#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(ull &N, ull &M, ull &ans){

    ull loc_N = N, loc_M = M;
    ull S_req;
    S_req = loc_N*2;
    
    if(S_req <= loc_M){
        ans += loc_N;
        loc_M -= S_req;

        ans += loc_M/4;
    }
    else{
        ans += loc_M/2;
    }
    return;
}

int main(){

    ull N, M;
    cin >> N >> M;

    ull ans{};
    solver(N, M, ans); 

    cout << ans << endl;
    return 0;
}