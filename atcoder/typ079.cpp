// Two by Two (star 3)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    
    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W, 0));
    vector<vector<ll>> B(H, vector<ll>(W, 0));
    for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            cin >> A.at(h).at(w);
        }
    }
    for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            cin >> B.at(h).at(w);
        }
    }

    vector<vector<ll>> dif(H, vector<ll>(W, 0));
    for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            dif.at(h).at(w) = A.at(h).at(w) - B.at(h).at(w);
        }
    }

/*     for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            cerr << dif.at(h).at(w) << " ";
        }
        cerr << endl;
    } */

    ll op_cnt = 0;
    for (ll h = 0; h < H-1; h++){
        for (ll w = 0; w < W-1; w++){
                ll ab = dif.at(h).at(w);
                dif.at(h).at(w) = 0;
                op_cnt += abs(ab);

            if (ab > 0){
                dif.at(h+1).at(w) -= ab;
                dif.at(h).at(w+1) -= ab;
                dif.at(h+1).at(w+1) -= ab;  
            }
            else if (ab < 0){
                dif.at(h+1).at(w) += abs(ab);
                dif.at(h).at(w+1) += abs(ab);
                dif.at(h+1).at(w+1) += abs(ab);  
            }
            else continue;
        }
    }

/*     for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            cerr << dif.at(h).at(w) << " ";
        }
        cerr << endl;
    } */

    for (ll h = 0; h < H; h++){
        for (ll w = 0; w < W; w++){
            if (dif.at(h).at(w) != 0){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    cout << op_cnt << endl;
    return 0;
}