// after editrial reading

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll LIMIT = (ll)1e18;

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

// TODO: solve

ll binary_search(string &X, ll M, ll left, ll right){

    ll mid = left + (right - left)/2;
    ll X_digited = 0;
    
    while (right - left > 1){
        mid = left + (right - left)/2;
//        cerr << left << " " << mid << " " << right << endl;

        bool cheked_overflow = false;
        for (int i = 0; i < X.size(); i++){
            ll buf = pow(mid, X.size()-(i+1))*ctoi(X.at(i)); 

            // preventing overflow
            if (X_digited >= LIMIT - buf){
                right = mid;
                cheked_overflow = true;
                break;
            }
            else X_digited += buf;
        }

//        cerr << X_digited << " " << M << " " << flg << endl;
        if (!cheked_overflow){
            if (X_digited > M) right = mid;
            else left = mid;
        }
        X_digited = 0;
    }

    return left;
}


int main(){

    string X;
    ll M;
    cin >> X >> M;

    // calc d
    int d = 0;
    for (int i = 0; i < X.size(); i++){
        d = max(d, ctoi(X.at(i)));
    }

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

    // binary search
    ll left = d+1;
    ll right = M;
    ll max_base_num = 0;
    max_base_num = binary_search(X, M, left, right);

    ll ans = 0;
    ans = max_base_num - (d+1) + 1;

    cout << ans << endl;
    return 0;
}

