#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll solver(int N, vector<ll> &A){

    ll sum = 0, dif = 0;
    for(int i=0; i != N-1; ++i){
        if(A.at(i) > A.at(i+1)){
            dif = A.at(i) - A.at(i+1);
            sum += dif;
            A.at(i+1) += dif;
        }
        dif = 0;
    }

    return sum;
}

int main(){

    int N;
    cin >> N;
    vector<ll> A(N);
    for(auto iter = A.begin(); iter != A.end(); ++iter) cin >> *iter;

    cout << solver(N, A) << endl;

    return 0;
}