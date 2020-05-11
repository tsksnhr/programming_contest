#include <bits/stdc++.h>
using namespace std;

int N;

int main(){

    cin >> N;
    double ans;

    if (N%2 == 0){
        ans = N/2;
        cout << ans << endl;
    }
    else{
        ans = ((int)(N/2))/N;
        cout << ans << endl;
    }

    return 0;
}