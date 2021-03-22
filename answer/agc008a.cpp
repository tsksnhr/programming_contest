#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll x, y;
    cin >> x >> y;

    ll dif = abs(y) - abs(x);
    ll ans = dif;
    if (dif == 0){
        if (x != y) ans++;
    }
    else if (dif > 0){
        if (x < 0) ans++;
        if (y < 0) ans++;
    }
    else{
        ans *= -1;
        if (x > 0) ans++;
        if (y > 0) ans++;
    }

    cout << ans << endl;
    return 0;
}