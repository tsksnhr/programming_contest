#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll H, W, X, Y;
    cin >> H >> W >> X >> Y;
    X--;
    Y--;
    vector<string> area(H);
    for (ll i = 0; i < H; i++) cin >> area.at(i);

    ll ans = 1;
    // X-axis
    for (ll i = Y+1; i < W; i++){
        if (area.at(X).at(i) == '.') ans++;
        else break;
    }
    cerr << 1 << " " << ans << endl;
//    ans--;
    for (ll i = Y-1; i >= 0; i--){
        if (area.at(X).at(i) == '.') ans++;
        else break;
    }
//    ans--;
    cerr << 2 << " " << ans << endl;

    // y-axis
    for (ll i = X+1; i < H; i++){
        if (area.at(i).at(Y) == '.') ans++;
        else break;
    }
//    ans--;
    cerr << 3 << " " << ans << endl;
    for (ll i = X-1; i >= 0; i--){
        if (area.at(i).at(Y) == '.') ans++;
        else break;
    }
//    ans--;
    cerr << 4 << " " << ans << endl;

    cout << ans << endl;
    return 0;
}