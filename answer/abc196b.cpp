#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string X;
    cin >> X;

    ll digit = -1;
    for (ll i = 0; i < X.size(); i++){
        char ch = X.at(i);
        if (ch == '.'){
            digit = i;
            break;
        }
    }

    if (digit == -1){
        cout << X << endl;
        return 0;
    }
    else {
        for (ll i = 0; i < digit; i++) cout << X.at(i);
    }
    cout << endl;
    return 0;
}