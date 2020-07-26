#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){

    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int l = 0, m = 0;
    while(a>=b){
        b *= 2;
        l++;
    }
    while(b>=c){
        c *= 2;
        m++;
    }

    if(l+m<=k) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}