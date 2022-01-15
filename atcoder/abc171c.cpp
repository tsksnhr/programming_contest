// after editorial reading

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    ll N;
    cin >> N;

    ll digit = 0;
    ll N_buf = N;
    ll N_saved = 0;
    while (N_buf > 0){
        digit++;
        N_buf -= pow(26, digit);

        if (N_buf > 0) N_saved = N_buf;
    }
    cerr << digit << endl;

    ll order = 0;
    string ans = "";
    while (N_buf > 0){
        ll mod = N_saved%26;
        N_saved /= 26;
        order++;
    }

}