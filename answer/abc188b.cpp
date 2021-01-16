#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++){
        cin >> B.at(i);
    }

    ll ans = 0;
    for (int i = 0; i < N; i++){
        ans += A.at(i)*B.at(i);
    }

    if (ans == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}