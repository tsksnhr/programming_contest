#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

int main(){

    ll B, C;
    cin >> B >> C;

    ll b_buf = 0, c_buf= 0;
    ll ans = 0;

    if (B > 0) c_buf = C - 1;
    else c_buf = C;

    if (c_buf%2 == 0){
        ans += (c_buf/2 - 1)*2 + 1;
    }
    else{
        ans += c_buf;
    }

    if (B > 0) c_buf = C - 1;
    else c_buf = C;

    if ((B*2 + 1) < c_buf){
        ans += B*2 + 1;
    }
    else{
        if (c_buf%2 == 0){
            ans += (c_buf/2 - 1)*2 + 1;
        }
        else{
            ans += c_buf;
        }   
    }

    cout << ans << endl;
    return 0;
}