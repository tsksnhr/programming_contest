#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin >> A.at(i);
    }

    int cnt = 0;
    for (int j=0; j<k; j++){
        vector<int> B(n, 0);
        
        for (int i=0; i<n; i++){

            int l = max(0, i - A.at(i));
            int r = min(n-1, i + A.at(i));

            B.at(l)++;
            if (r+1<n) B.at(r+1)--;
        }
        for (int i=1; i<n; i++){
            B.at(i) += B.at(i-1);
        }
        for (int i=0; i<n; i++){
            A.at(i) = B.at(i);

            if (A.at(i) == n) cnt++;
        }

        if (cnt == n) break;
        cnt = 0;
    }

    for (auto x: A){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}