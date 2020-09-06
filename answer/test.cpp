#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

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

    cout << "unsorted" << endl;
    for(int i = 0; i < N+1; ++i){
        for(int j = 0; j < (int)ab.at(i).size(); ++j){
            cout << ab.at(i).at(j) << " "s;
        }
        cout << endl;
    }

    sort(ab.begin(), ab.end());
    cout << "sorted" << endl;
    for(int i = 0; i < N+1; ++i){
        for(int j = 0; j < (int)ab.at(i).size(); ++j){
            cout << ab.at(i).at(j) << " "s;
        }
        cout << endl;
    }
    cout << "end"s;
    return 0;
}