#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> p(n);
    int cnt = 0;
    for (int i=0; i<n; i++){
        cin >> p.at(i);
    }
    
    for (int i=0; i<n; i++){
        if (p.at(i) != i+1){
            cnt++;
        }
        if (cnt > 2){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}