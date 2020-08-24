#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(vector<vector<int>> const &grid, bool &flg){

    vector<int> a(3);
    vector<int> b(3);
    
    a.at(0) = 0;
    for(int i = 0; i != 3; ++i){
        b.at(i) = grid.at(0).at(i) - a.at(0);
    }
    for(int i = 0; i != 3; ++i){
        a.at(i) = grid.at(i).at(0) - b.at(0); 
    }

    for(int i = 0; i != 3; ++i){
        for(int j = 0; j != 3; ++j){
            if(grid.at(i).at(j) != a.at(i) + b.at(j)) flg = false;
        }
    }

    return;
}

int main(){

    vector<vector<int>> grid(3, vector<int>(3));
    for(int i = 0; i != 3; ++i){
        for(int j = 0; j != 3; ++j){
            cin >> grid.at(i).at(j);
        }
    }

    bool flg = true;
    solver(grid, flg);

    if(flg) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}