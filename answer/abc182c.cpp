#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(ll N, ll &ans){

    ll digit_sum = 0;
    ll digit = 0;
    map<ll, ll> digit_mod;
    while(N != 0){
        ll digit_num = N%10;
        digit_sum += digit_num;
        N /= 10;
        digit_mod[digit_num%3]++;
        digit++;
    }

    if (digit_sum%3 == 0){
        ans = 0;
    }
    else{
        ll mod = digit_sum%3;
        if (mod == 1){
            if ((digit_mod[1] > 1) || ((digit_mod[1] == 1) && digit > 1)){
                ans = 1;
                return;
            }
            else{
                if ((digit_mod[2] >= 2) && (digit > 2)){
                    ans = 2;
                    return;
                }
                else{
                    ans = -1;
                    return;
                }
            }
        }
        if (mod == 2){
            if ((digit_mod[2] > 1) || ((digit_mod[2] == 1) && digit > 1)){
                ans = 1;
                return;
            }
            else{
                if ((digit_mod[1] >= 2) && (digit > 2)){
                    ans = 2;
                    return;
                }
                else{
                    ans = -1;
                    return;
                }
            }
        }
    }
}

int main(){

    ll N;
    cin >> N;

    ll ans = -1;
    solver(N, ans);

    cout << ans << endl;
    return 0;
}