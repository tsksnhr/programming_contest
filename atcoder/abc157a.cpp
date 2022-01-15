#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    int ans;
    ans = N/2;

    if (N%2 == 0){
        cout << ans << endl;
    }
    else{
        cout << ans+1 << endl;
    }

    return 0;
}