#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(int H, int W, vector<vector<char>> const &area, bool &ans){

    int up, down, left, right;
    for(int h = 0; h != H; ++h){
        for(int w = 0; w != W; ++w){

            bool a = true, b = true, c = true, d = true; 

            up = h-1;
            down = h+1;
            left = w-1;
            right = w+1;

            if(area.at(h).at(w) == '#'){
                if(up == -1 || area.at(up).at(w) == '.') a = false;
                if(down == H || area.at(down).at(w) == '.') b = false;
                if(left == -1 || area.at(h).at(left) == '.') c = false;
                if(right == W || area.at(h).at(right) == '.') d = false;
            }

            if( !(a || b || c || d)) ans = false;
        }
    }    

    return;
}

int main(){

    int H, W;
    cin >> H >> W;
    vector<vector<char>> area(H, vector<char>(W));
    for(int h = 0; h != H; ++h){
        for(int w = 0; w != W; ++w){
            cin >> area.at(h).at(w);
        }
    }

    bool ans = true;
    solver(H, W, area, ans);

    if(ans) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}