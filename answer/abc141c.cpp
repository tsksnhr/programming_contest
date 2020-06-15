#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll N, K, Q;
vector<ll> A(1e5+5);

int main(){

    cin >> N >> K >> Q;

    for (int i=0; i<Q; i++){
        ll tmp;
        cin >> tmp;
        A.at(tmp)++;
    }

    ll sum = 0;
    for (int i=1; i<=N; i++){
        sum += A.at(i);
    }

    ll thr;
    for (int i=1 ;i<=N; i++){
        thr = K - (sum - A.at(i));
        if (thr > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}