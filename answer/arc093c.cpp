#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e16;

void solver(int N, vector<int> &A, vector<ll> &money){

    ll dist_sum = 0;
    vector<int> dist(N+1);

    dist.at(0) = abs(A.at(0));
    dist.at(N) = abs(A.at(N-1));
    dist_sum += dist.at(0);
    dist_sum += dist.at(N);
    for(int i=0; i<N-1; ++i){

        dist.at(i+1) = abs(A.at(i+1) - A.at(i));
        dist_sum += dist.at(i+1);
    }
//    cout << dist_sum << endl; // debug

    for(int i=0; i<N; ++i){
        ll buf;
        buf = dist_sum;
        buf -= (dist.at(i) + dist.at(i+1));
        
        int l, r;
        if(i-1 < 0){
            l = 0;
        }
        else{
            l = A.at(i-1);
        }
        if(i+1 > N-1){
            r = 0;
        }
        else{
            r = A.at(i+1);
        }
//        cout << l << " "s << r << endl;   // debug
        buf += abs(l-r);

        money.at(i) = buf;
    }
    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
    }

    vector<ll> money(N);
    solver(N, A, money);

    for(int i=0; i<N; ++i){
        cout << money.at(i) << endl;
    }
    return 0;
}