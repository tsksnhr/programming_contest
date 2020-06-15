#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> p(n);
    for (int i=0; i<n; i++){
        cin >> p.at(i);
    }

    sort(p.begin(), p.end());

    int mid = n/2;
    if (n%2 != 0){
        cout << 0 << endl;
    }
    else{
        int ans;
        ans = p.at(mid) - p.at(mid - 1);
        cout << ans << endl;
    }
    return 0;
}