// Secret Number
// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int factrial(int n){

    if (n == 0) return 1;

    int ret = 1;
    for (int i = 1; i <= n; i++) ret *= i;

    return ret;

}

int nCr(int n, int r){

    int up = 1, down = 1;
    up = factrial(n);
    down *= factrial(r);
    down *= factrial(n-r);

    return up/down;
}


int main(){

    string str;
    cin >> str;
    map<int, int> code;
    for (int i = 0; i < str.size(); i++){
        char ch = str.at(i);
        if (ch == 'o') code[0]++;
        else if (ch == '?') code[1]++;
        else code[2]++;
    }
    // cerr << code[0] << " " << code[1] << " " << code[2] << endl;
    
    ll ans = 1;
    if (code[0] > 4){
        ans = 0;
        cout << ans << endl;
        return 0;
    }

    ans *= nCr(code[1] + code[0], 4 - code[0]);
    ans *= factrial(4);
    int max_same = 5 - code[0];
    for (int i = 1; i <= max_same; i++){
        ans /= i;
    }

    cout << ans << endl;

    return 0;
}