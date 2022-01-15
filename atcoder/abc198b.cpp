#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(ll N, ll &ans){

}

int main(){

    string S;
    cin >> S;

    for (ll i = S.size()-1; i >= 0; i--){
        char tmp = S.at(i);

        if (tmp == '0') S.pop_back();
        else break;
    }

    string T = S;
    reverse(T.begin(), T.end());
    cerr << S << " " << T << endl;

    if (S == T) cout <<  "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}