#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    
    int X, N;
    cin >> X >> N;
    map<int, int> dict;

    for (int i=0; i<N; i++){
        int temp;
        cin >> temp;
        dict[temp]++;
    }

    int ans = 1e4;
    for (int i=0; i<101; i++){
        int lbuf, rbuf, l = 1e4, r = 1e4; 
        lbuf = X - i;
        rbuf = X + i;

//        cout << lbuf << " " << rbuf << endl;

        if (!dict.count(lbuf)) l = lbuf;
        if (!dict.count(rbuf)) r = rbuf;
        ans = min(l, r);
        if (ans != 1e4) break;
    }

    cout << ans << endl;
    return 0;
}