#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll W, H, N;
    cin >> W >> H >> N;

    ll h_up = H, h_down = 0, w_up = W, w_down = 0;
    for (ll i = 0; i < N; i++){
        ll x, y, a;
        cin >> x >> y >> a;

        // White area expands unless max() and min() aren't used. 
        if (a == 1) w_down = max(w_down, x);
        else if (a == 2) w_up = min(w_up, x);
        else if (a == 3) h_down = max(h_down, y);
        else h_up = min(h_up, y); 
    }

    ll w_dif, h_dif;
    w_dif = w_up - w_down;
    w_dif = max(w_dif, 0LL);
    h_dif = h_up - h_down;
    h_dif = max(h_dif, 0LL);

    ll ans = w_dif*h_dif;
    cout << ans << endl;
    return 0;
}