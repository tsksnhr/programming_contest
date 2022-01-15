#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    int N;
    cin >> N;

    int num = 1;
    for (int i = 0; i < N; i++){
        num *= 2;
    }

    vector<ll> A(num);
    for (int i = 0; i < num; i++){
        cin >> A.at(i);
    }

    ll left = A.at(0), right = A.at(num/2);
    int l_no = 0, r_no = 0;
    for (int i = 0; i < num/2; i++){
        left  = max(left, A.at(i));
        if (left == A.at(i)){
            l_no = i+1;
            cerr << i << l_no << left << endl;
        }
    }
    for (int i = num/2; i < num; i++){
        right = max(right, A.at(i));
        if (right == A.at(i)){
            r_no = i+1;
            cerr << i << r_no << right << endl;
        }
    }

    if (left > right){
        cout << r_no << endl;
    }
    else{
        cout << l_no << endl;
    }

    return 0;
}