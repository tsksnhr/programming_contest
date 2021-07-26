// There are two types of characters (star 3)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll CalcTinyAns(ll x){

    ll ret = 0;
    for (int i = x; i > 0; i--){
        ret += i - 1;
    }
    
    return ret;
}

int main(){

    int N;
    string str;
    cin >> N >> str;
    
    ll ans = 0;
    ans = CalcTinyAns((ll)str.size());
    // cerr << ans << endl;

    char ch_l = str.at(0);
    ll same_adjacent_cnt = 0;
    for (int i = 1; i < str.size(); i++){
        char ch_r = str.at(i);

        if (ch_l == ch_r) same_adjacent_cnt++;
        else{
            if (same_adjacent_cnt > 0) same_adjacent_cnt++;
            ans -= CalcTinyAns(same_adjacent_cnt);
            same_adjacent_cnt = 0;
        }
        ch_l = ch_r;
    }
    if (same_adjacent_cnt > 0) same_adjacent_cnt++;
    ans -= CalcTinyAns(same_adjacent_cnt);

    cout << ans << endl;
    return 0;
}