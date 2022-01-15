// after editorial reading 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll A, B, C;
    cin >> A >> B >> C;

    ll a_lsb = A%10;

    ll b_mod_4 = B%4;
    ll bc_mod_4 = 0;        // complicated-name
    if (C%2 == 0){
        if ((b_mod_4 == 3) || (b_mod_4 == 1)){
            bc_mod_4 = 1;
        }
        else{
            bc_mod_4 = 4;
        }
    }
    else{
        if ((b_mod_4 == 3) || (b_mod_4 == 1)){
            bc_mod_4 = b_mod_4;
        }
        else if (b_mod_4 == 2){
            if (C == 1) bc_mod_4 = 2;
            else bc_mod_4 = 4;
        }
        else{
            bc_mod_4 = 4;
        }
    }

    ll ans = 0;
    cerr << a_lsb << " " << bc_mod_4 << endl;
    ans = pow(a_lsb, bc_mod_4);
    ans %= 10;

    cout << ans << endl;
    return 0;
}