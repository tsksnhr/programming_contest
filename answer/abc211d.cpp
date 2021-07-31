// Number of Shortest paths
// solved after reading editorial

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

void BFS(int N, int M, vector<vector<int>> &area, vector<ll> &dist, int start, vector<ll> &cnt){

    queue<int> que;
    que.push(start);
    dist.at(start) = 0;
    cnt.at(start) = 1;

    while (!que.empty()){
        int now = que.front();
        que.pop();

        for (auto next: area.at(now)){

            if (dist.at(next) != INF){
                if ((dist.at(now) + 1) == dist.at(next)){
	                // cerr << "next = " << next << endl;
                  	// cerr << "cnt.at(next) = " << cnt.at(next) << endl;
                    cnt.at(next) += cnt.at(now);
                  	// cerr << "cnt.at(next) = " << cnt.at(next) << endl;
	                cnt.at(next) %= MOD;
                  	// cerr << "cnt.at(next) = " << cnt.at(next) << endl;
                  	continue;
                }
                else continue;
            }

            dist.at(next) = dist.at(now) + 1;
            cnt.at(next) = cnt.at(now);

            que.push(next);
        }
    }

    return;
}

int main(){

    int  N, M;
    cin >> N >> M;
    vector<vector<int>> area(N);
    for (int i = 0; i < M; i++){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        area.at(l).push_back(r);
        area.at(r).push_back(l);
    }

    vector<ll> dist(N, INF);
    vector<ll> cnt(N, 0);
    BFS(N, M, area, dist, 0, cnt);

    // for (auto x: cnt) cerr << x << " ";
    // cerr << endl;

    cout << cnt.at(N-1) << endl;
    return 0;
}