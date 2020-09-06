#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, int M, vector<vector<int>> &ab, bool &flg){

    queue<int> q;
    vector<int> cost(N+1, -1);

    q.push(1);
    cost.at(1) = 0;

    //  bfs
    while( !q.empty() ){
        int buf;
        buf = q.front();
        q.pop();
//        cout << "buf = "s << buf << endl;

        for( auto np: ab.at(buf) ){
           if( cost.at(np) != -1 ){
               continue;
           }
           cost.at(np) = cost.at(buf) + 1;
//           cout << np << " "s << cost.at(np) << " "s << cost.at(buf) << endl;
           q.push(np);
        }
    }
    if( cost.at(N) == 2){
        flg = true;
    }

//    for( int i = 0; i < N+1; ++i){
//        cout << "cost = "s << cost.at(i) << endl;
//    }

    return;
}

int main(){

    int N, M;
    cin >> N >> M;
    vector<vector<int>> ab(N+1);
    for( int i = 0; i < M; ++i){
        int a, b;
        cin >> a >> b;
        ab.at(a).push_back(b);
        ab.at(b).push_back(a);
    }

    bool flg = false;
    solver(N, M, ab, flg);

    if( flg ){
        cout << "POSSIBLE"s << endl;
    }
    else{
        cout << "IMPOSSIBLE"s << endl;
    }
    return 0;
}