#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    cin >> S;

    ll left = 0;
    ll right = S.size()-1;
    
    ll ans = 0;
    bool is_second_step = false;
    bool is_all_same = false;
    while (left - right < 1){
        char left_ch = S.at(left);
        char right_ch = S.at(right);

        if ((!is_second_step) || (ans/2 == 0)){
            for (ll i = left+1; i < S.size(); i++){
                if (left_ch != S.at(i)){
                    left = i;
                    break;
                }
            }
        }
        if ((!is_second_step) || (ans/2 != 0)){
            for (ll j = right; j >= 0; j--){
                if (right_ch != S.at(j)){
                    right = j;
                    break;
                }
            }
        }
        if (is_second_step) ans++;
        is_second_step = true;

        if (left == 0){
            is_all_same = true;
            break;
        }

//        cerr << left << " " << right << endl;
    }

    if (!is_all_same) ans++;
    cout << ans << endl;
    return 0;
}