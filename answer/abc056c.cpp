#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(ll X, ll &ans){

    vector<ll> move_sum;
    ll buf{}, ans_buf{};
    for(ll i = 0; ; ++i){
        buf += i;

        if(buf >= X){
            ans_buf = i;
            break;
        }
    }
    ans = ans_buf;
    return;
}

int main(){

    ll X; 
    cin >> X;

    ll ans;
    solver(X, ans);

    cout << ans << endl;
    return 0;
}