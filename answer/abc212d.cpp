// Querying Multiset
// TODO: read editorial and solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main(){

    int Q;
    cin >> Q;
    priority_queue<P, vector<P>, greater<P>> ball_data;
    vector<ll> sum_array(Q+3, 0);
    int pos = 0;

    for (int i = 0; i < Q; i++){
        int command;
        ll X;
        cin >> command;

        if (command == 1){
            cin >> X;
            P tmp_p;
            tmp_p.first = X;
            tmp_p.second = pos;

            ball_data.push(tmp_p);
        }
        else if (command == 2){
            cin >> X;
            pos++;
            sum_array.at(pos) = sum_array.at(pos-1) + X;
        }
        else{
            // for (auto x: sum_array) cerr << x << " ";
            // cerr << endl;

            P tmp_p = ball_data.top();
            ball_data.pop();

            ll add = 0;
            if (pos != tmp_p.second) add = sum_array.at(pos) - sum_array.at(tmp_p.second);

            ll ans = tmp_p.first + add; 
            cout << ans << endl;
        }
    }

    return 0;
}