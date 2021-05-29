// Cubic Cake (star_2)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll A, B, C;
    cin >> A >> B >> C;

    ll cube_size;
    cube_size = __gcd(A, __gcd(B, C));

    ll ans;
    ans = (A/cube_size - 1) + (B/cube_size - 1) + (C/cube_size - 1);

    cout << ans << endl;

    return 0;
}
