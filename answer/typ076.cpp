// Cake Cut (star_3)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    ll sum = 0;
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
        sum += A.at(i);
    }
    for (int i = 0; i < N; i++) A.push_back(A.at(i));

    vector<ll> A_sum(2*N);
    A_sum.at(0) = A.at(0);
    for (int i = 1; i < 2*N; i++){
        A_sum.at(i) = A.at(i) + A_sum.at(i-1);
    }

    ll tag = 0;
    if (sum%10 == 0) tag = sum/10;
    else{
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < 2*N; i++){
        ll start = A_sum.at(i);
        ll val = start - tag;

        auto iter = lower_bound(A_sum.begin(), A_sum.end(), val);
        if (iter != A_sum.end() && *iter == val){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
