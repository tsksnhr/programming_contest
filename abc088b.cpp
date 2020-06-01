#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++){
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    
    int alice = 0, bob = 0;
    for (int i=N-1; i>=0; i = i-2){
        alice += a.at(i);
        if (i==0) break;
        bob += a.at(i-1);
    }

    int ans;
    ans = alice - bob;

    cout << ans << endl;
    return 0;
}