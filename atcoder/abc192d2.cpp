#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ctoi(char buf){
    if (buf == '0') return 0;
    if (buf == '1') return 1;
    if (buf == '2') return 2;
    if (buf == '3') return 3;
    if (buf == '4') return 4;
    if (buf == '5') return 5;
    if (buf == '6') return 6;
    if (buf == '7') return 7;
    if (buf == '8') return 8;
    if (buf == '9') return 9;
}

int main(){

    string X;
    ll M;
    cin >> X >> M;

    // calc d
    int d = 0;
    pair<int, int> P;
    bool flg = false;
    for (int i = 0; i < X.size(); i++){
        d = max(d, ctoi(X.at(i)));

        if ((X.at(i) != '0') && (flg == false)){
            P.first = X.size() - (i+1);
            P.second = ctoi(X.at(i));
            flg = true;
        }
    }

    // after editrial reading, starts.
    if (X.size() == 1){
        if (d > M){
            cout << 0 << endl;
            return 0;
        }
        else{
            cout << 1 << endl;
            return 0;
        }
    }
    // after editorial reading, ends.

    ll base_num = d + 1;
    ll max_base = 0;
    max_base = pow((double)(M/P.second), 1./P.first);
//    cerr << max_base << " " << base_num << endl;

    ll thr = 0;
    ll ans = 0;
    for (ll j = max_base; j >= base_num; j--){
        for (int i = 0; i < X.size(); i++){
            thr += (ll)ctoi(X.at(i))*(ll)(pow(j, X.size() - (i+1)));
        }
//        cerr << thr << endl;
        if (thr <= M){
//            cerr << j << " " << base_num << endl;
            ans = j - base_num + 1;
            break;
        }
        thr = 0;
    }

    cout << ans << endl;
    return 0;
}

