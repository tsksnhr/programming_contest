#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll c_num, d_num, cd_num;
    c_num = b/c - a/c;
    if (a%c == 0){
        c_num += 1;
    }
    d_num = b/d - a/d;
    if (a%d == 0){
        d_num += 1;
    }

    ll temp;
    temp = (c*d)/__gcd(c, d);
    cd_num = b/(temp) - a/(temp);
    if (a%(temp) == 0){
        cd_num += 1;
    }

    ll ans = (b-a+1) - (c_num+d_num-cd_num);
    cout << ans << endl;
    return 0;
}