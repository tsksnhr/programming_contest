#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, n, i, length0, length1, length1_buf, ans;

    length0 = 0;
    length1 = 0;
    ans = k;

    cin >> k >> n;

    int a[n];

    for (i=0; i<n; i++){
        cin >> a[i];
    }

    for (i=1; i<n; i++){

        length1_buf = a[i] - a[i-1];

        if (length1 <= length1_buf){
            length1 = length1_buf;
        }
    }

    length1_buf = a[n-1] - a[0];

    if (k/2 < length1_buf){
        length1_buf = k - length1_buf;
    }

    if (length1 <= length1_buf){
        length1 = length1_buf;
    }

    cout << k - length1 << endl;

    return 0;
}