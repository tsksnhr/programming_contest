#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//  これはACになる
int main(){

    int n;
    cin >> n;
    vector<ll> height(n);
    for (int i=0; i<n; i++){
        cin >> height.at(i);
    }

    ll m = height.at(0);
    for (int i=0; i<n; i++){
        if (m - 1 > height.at(i)){
            cout << "No" << endl;
            return 0;
        }
        m = max(m, height.at(i));
    }

    cout << "Yes" << endl;
    return 0;
}


/*  10 9 9 9 9 9 8　などの時に"No"を出さないといけないが、下記だと見逃す！！！

int main(){

    int n;
    cin >> n;
    vector<ll> height(n);
    for (int i=0; i<n; i++){
        cin >> height.at(i);
    }

    for (int i=0; i<n-1; i++){
        if (height.at(i) - 1LL > height.at(i+1)){
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i=0; i<n-2; i++){
        if (height.at(i) - 1LL > height.at(i+2)){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

*/