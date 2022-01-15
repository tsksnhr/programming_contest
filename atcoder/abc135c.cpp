#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n);
    ll sum = 0;
    for (int i=0; i<n+1; i++){
        cin >> a.at(i);
        sum += a.at(i);
    }
    for (int i=0; i<n; i++){
        cin >> b.at(i);
    }

    for (int i=0; i<n; i++){
        ll temp = a.at(i) - b.at(i);
        if (temp <= 0LL){
            a.at(i) = 0LL;
            a.at(i+1)  = max(0LL, a.at(i+1)+temp);
        }
        else{
            a.at(i) = temp;
        }
    }

    ll diff = 0LL;
    for (int i=0; i<n+1; i++){
        diff += a.at(i);
    }

    cout << sum - diff << endl;
    return 0;
}