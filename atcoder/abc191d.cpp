// after editrial
// TODO solve
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    double X, Y, R;
    cin >> X >> Y >> R;

    ll cX, cY, cR;
    cX = round(X*10000);
    cY = round(Y*10000);
    cR = round(R*10000);

    ll left_lim, right_lim;
    left_lim = cX - cR;
    right_lim = cX + cR;

    ll mod_num;
    mod_num = left_lim%10000;
    left_lim += (10000 - mod_num);

    ll ans = 0;
    bool flg = false;
    for (ll i = left_lim; i <= right_lim; i += 10000){

        ll y_length;
        y_length = cR*cR - (cX - i)*(cX - i);

        ll upper_y_pos, lower_y_pos;
        upper_y_pos = floor(sqrt(y_length) + cX);
        lower_y_pos = ceil(-sqrt(y_length) + cX);

        for (ll j = lower_y_pos; j <= upper_y_pos; ){
            if (j%(ll)10000 == 0){
                ans++;
                j += 10000;
            }
            else{
                j++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}