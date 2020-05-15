#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin >> n >> x;
    vector<int> l(n);
    vector<int> d(n+1);
    for (int i=0; i<n; i++){
        cin >> l.at(i);
    }

    d.at(0) = 0;
    int ans;
    for (int i=1; i<n+1; i++){
        d.at(i) = d.at(i-1) + l.at(i-1);
        if (d.at(i) > x){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}