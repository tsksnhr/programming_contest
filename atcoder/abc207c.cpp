// Many Segments 

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<double> left(N);
    vector<double> right(N);
    for (int i = 0; i < N; i++){
        
        ll op;
        cin >> op >> left.at(i) >> right.at(i);

        if (op == 1) continue;
        else if (op == 2) right.at(i) -= 0.1;
        else if (op == 3) left.at(i) += 0.1;
        else{
            left.at(i) += 0.1;
            right.at(i) -= 0.1;
        }
    }

    ll cnt = 0;
    for (ll i = 0; i < N; i++){
        for (ll j = i+1; j < N; j++){
            bool is_far_1, is_far_2;
            is_far_1 = (right.at(i) < left.at(j) && right.at(j) > left.at(i));
            is_far_2 = (right.at(j) < left.at(i) && right.at(i) > left.at(j));

            if (is_far_1 || is_far_2) continue;
            cnt++;
//            cerr << i << " " << j << endl;
        }
    }

    cout << cnt << endl;
    return 0;
}