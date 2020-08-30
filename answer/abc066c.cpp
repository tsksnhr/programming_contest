#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int n, vector<ll> &a, vector<ll> &b){

    int cnt{}, left{}, right{};
    left = 0;
    right = (int)a.size()-1;
    
    for(int i = (int)a.size()-1; i != -1; --i){
        int buf;
        buf = a.at(i);

        if(cnt%2 == 0){
            b.at(left) = buf;
            ++left;
        }
        else{
            b.at(right) = buf;
            --right;
        }
        ++cnt;
    }
    return;
}

int main(){

    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i != n; ++i){
        cin >> a.at(i);
    }

    vector<ll> b(n, 0);
    solver(n, a, b);

    for(int i = 0; i != (int)b.size(); ++i){
        cout << b.at(i) << " "s;
    }
    cout << endl;

    return 0;
}