#include <bits/stdc++.h>
using namespace std;

int nPr(int n, int r){

    int ans = 1;

    if ((n == 0) || (r == 0)) ans = 0;
    else{
        int num = n - r;
        for (int i=n; i>num; i--) ans *= i;
    }

    return ans;
}

int nCr(int n, int r){

    int ans = 1;

    if ((n == 0) || (r == 0)) ans = 0;
    else{
        int demominator = 1, numerator = 1, temp_a = 1, temp_b = 1;
        
        for (int i=1; i<=n; i++) numerator *= i;
        for (int i=1; i<=r; i++) temp_a *= i;
        for (int i=1; i<=n-r; i++) temp_b *= i;

        demominator = temp_a*temp_b;

        ans = numerator/demominator;
    }

    return ans;
}

int main(){

    int n, r;
    cin >> n >> r;

    cout << nPr(n, r) << endl;
    cout << nCr(n, r) << endl;
    return 0;
}