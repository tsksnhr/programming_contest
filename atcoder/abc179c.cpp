#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver1(ll N, ll &ans){

    for (ll a = 1; a*a < N; a++){
        for (ll b = a; a*b < N; b++){
            if (a == b) ans += 1;
            else ans += 2;
        }
    }
    return;
}

void solver2(ll N, ll &ans){

    for (ll a = 1; a < N; a++){
        ans += (N-1)/a;
    }
    return;
}

int main(){

    ll N;
    cin >> N;

    ll ans = 0;
//    solver1(N, ans);
    solver2(N, ans);

    cout << ans << endl;
    return 0;
}