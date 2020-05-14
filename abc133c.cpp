#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll l,r,ans;
    cin >> l >> r;

    if ((l < 2019) && (r < 2019)){
        ans = ((l + 1)*l)%2019;
    }
    else if ((l <= 2019) && (2019 <= r)){
        ans = 0;
    }
    else{
        if (r/2019 != l/2019){
            ans = 0;
        }
        else{
            ll temp, min_num = 2020;
            for (ll a=l; a<=r; a++){
                for (ll b=a+1; b<=r; b++){
                    temp = ((a%2019)*(b%2019))%2019;
                    min_num = min(min_num, temp);
                }
            }
            ans = min_num;
        }
    }

    cout << ans << endl;
    return 0;
}