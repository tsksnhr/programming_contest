// Hydrate

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b >= c*d){
        cout << -1 << endl;
        return 0;
    }
    
    ll ans = 0;
    for (ans = 1; ; ans++){
        ll red, blue;
        blue = a + b*ans;
        red = c*d*ans;

        if (blue <= red) break;
    }

    cout << ans << endl;
    return 0;
}