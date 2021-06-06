//

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll x, y;
    cin >> x >> y;

    ll total = 3;
    if (x == y) cout << x << endl;
    else cout << total - x - y << endl;

    return 0;
}