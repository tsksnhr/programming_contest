// Querying Multiset

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main(){

    int Q;
    cin >> Q;
    priority_queue<ll, vector<ll>, greater<ll>> ball_data;
    ll sum = 0;
    
    for (int i = 0; i < Q; i++){
        int command;
        ll X;
        cin >> command;

        if (command == 1){
            cin >> X;
            X -= sum;
            ball_data.push(X);
        }
        else if (command == 2){
            cin >> X;
            sum += X;
        }
        else{

            ll tmp = ball_data.top();
            ball_data.pop();
//            cerr << tmp << " " << sum << endl;

            ll ans = tmp + sum; 
            cout << ans << endl;
        }
    }

    return 0;
}