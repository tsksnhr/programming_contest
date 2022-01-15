// abc195b
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

int main(){

    ll A, B, W;
    cin >> A >> B >> W;
    W *= 1000;

    ll max_num, min_num;
    bool is_ans_exist = true;
    vector<ll> ans_dataset;
    for (ll i = A; i <= B; i++){
        ll div = W/i;
        ll mod = W%i;

        if (mod == 0) ans_dataset.push_back(div);
        else{
            for (ll j = A; j <= B; j++){
                if (mod%j == 0) ans_dataset.push_back(div + mod/j);
            }
        }
    }
    if (ans_dataset.size() == 0) is_ans_exist = false;

    if (is_ans_exist){
        sort(ans_dataset.begin(), ans_dataset.end());
        min_num = ans_dataset.at(0);
        max_num = ans_dataset.at(ans_dataset.size()-1);
        cout << min_num << " " << max_num << endl;
    }
    else cout << "UNSATISFIABLE" << endl;

    return 0;
}