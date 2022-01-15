#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver1(ll R, ll X, ll Y, ll &ans){

    ll dist_sq = X*X + Y*Y;
    double dist = sqrt(dist_sq);
//    ll move_sq = R*R;

//    ll div = 0, mod = 0;
    double div = 0;
    div = dist/R;
//    mod = dist_sq%R;

    if (floor(div) == div) ans = div;
    else ans = div + 1;

    return;
}

void solver2(ll R, ll X, ll Y, ll &ans){

    ll dist_sq = X*X + Y*Y;
    double dist = sqrt(dist_sq);

    if (dist < R){
        ans = 2;
        return;
    }

    ll cnt = 0;
    while (dist > 0){
        dist -= R;
        cnt++;
    }
    ans = cnt;

    return;
}

int main(){

    ll R, X, Y;
    cin >> R >> X >> Y;

    ll ans = 0;
//    solver1(R, X, Y, ans);
//    cerr << ans << endl;
    solver2(R, X, Y, ans);
//    cerr << ans << endl;

    cout << ans << endl;
    return 0;
}