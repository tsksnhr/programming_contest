// Cycle Hit

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main(){

    vector<string> str(4);
    for (int i = 0; i < 4; i++) cin >> str.at(i);

    vector<bool> flg(4);
    for (int i = 0; i < 4; i++){
        string s = str.at(i);

        if (s == "H") flg.at(0) = true;
        else if (s == "2B") flg.at(1) = true;
        else if (s == "3B") flg.at(2) = true;
        else flg.at(3) = true;
    }

    for (auto x: flg){
        if (x == false){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}