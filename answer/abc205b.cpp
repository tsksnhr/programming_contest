// 

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll N;
    cin >> N;
    map<ll, ll> A;
    for (ll i = 0; i < N; i++){
        ll tmp;
        cin >> tmp;
        A[tmp]++;

        if (tmp < 0 || tmp > N || A[tmp] > 1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}