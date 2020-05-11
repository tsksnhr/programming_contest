#include <bits/stdc++.h>
using namespace std;

int N;

int main(){

    cin >> N;
    double temp, ans;

    if (N%2 == 0){
        temp = N/2.0;
        ans = temp/N;
    }
    else{
        temp = N/2 + 1;
        ans = temp/N;
    }

    cout << fixed << setprecision(15);
    cout << ans << endl;
    return 0;
}