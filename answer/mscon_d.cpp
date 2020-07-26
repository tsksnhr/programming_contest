#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    ll money = 1000, num = 0;
    for(int i=0; i<N-1; i++){
        if(A.at(i)<A.at(i+1)){
            num = money/A.at(i);
            money -= num*A.at(i);
            money += num*A.at(i+1);
        }
    }

    cout << money << endl;
    return 0;
}