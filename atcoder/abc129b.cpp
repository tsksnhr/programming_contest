#include <bits/stdc++.h>
using  namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> w(n);
    int t, i, j;
    for (int i=0; i<n; i++){
        cin >> w.at(i);
    }

    int sum1, sum2, diff, min_num = 1e5;
    for (int t=0; t<n; t++){
        sum1 = 0;
        sum2 = 0;
        diff = 0;

        for (int i=0; i<t; i++){
            sum1 += w.at(i);
        }
        for (int j=t; j<n; j++){
            sum2 += w.at(j);
        }
        diff = abs(sum1-sum2);
        min_num = min(min_num, diff);
    }

    cout << min_num << endl;
    return 0;
}