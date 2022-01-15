#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(string S, ll &ans){

    ll ans_buf{};
    for(int i = 0; i != (int)S.size()-1; ++i){
        if(S.at(i) == 'U'){
            ans_buf += (int)S.size()-1-i;
        }
        else{
            ans_buf += ((int)S.size()-1-i)*2;
        }
    }
    for(int i = (int)(S.size())-1; i != 0; --i){
        if(S.at(i) == 'D'){
            ans_buf += i;
        }
        else{
            ans_buf += i*2;
        }
    }

    ans = ans_buf;
    return;
}

int main(){

    string S;
    cin >> S;

    ll ans{};
    solver(S, ans);

    cout << ans << endl;
    return 0;
}