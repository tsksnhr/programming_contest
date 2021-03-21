#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    // input
    ll n;
    cin >> n;
    vector<vector<ll>> graph(n);
    for (ll i = 0; i < n; i++){
        ll idx, tmp;
        cin >> idx >> tmp;
        idx--;

        for (ll j = 0; j < tmp; j++){
            ll point;
            cin >> point;
            point--;

            graph.at(idx).push_back(point);
        }
    }

    // BFS
    queue<ll> que;
    vector<ll> distance(n, -1);

    distance.at(0) = 0;
    que.push(0);

    while (!que.empty()){
        ll tmp = que.front();
        que.pop();

        for (auto next: graph.at(tmp)){
            if (distance.at(next) == -1){ 
                que.push(next);
                distance.at(next) = distance.at(tmp) + 1;
            }
        }
    }
    
    for (ll i = 0; i < n; i++){
        cout << i + 1 << " " << distance.at(i) << endl;
    }
    return 0;
}