// hadn't get AC yet...

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long binary_exponentiation(long long a, long long x){

    if (x == 0) return 1;
    else if (x%2 != 0) return a*binary_exponentiation(a, x-1);
    else return binary_exponentiation(a, x/2)*binary_exponentiation(a, x/2);
}

int main(){

    ll N;
    cin >> N;
    ll temp = N;

    ll cnt = 1, buf = 0, digit = 0;
    while(temp > 0){
        temp -= binary_exponentiation(26, cnt);
        digit++;
        cnt++;
    }

    temp = N;
    for (ll i=1; i<digit; i++)  temp -= binary_exponentiation(26, i);

//    cout << digit << endl;

    vector<ll> div(digit);
    while(digit>0){
        if(temp >= binary_exponentiation(26, digit)) temp--;
//        temp--;
//        cout << "temp = " << temp << endl;
        div.at(digit-1) = temp%26;
        temp /= 26;
        digit--;
    }

//    for(auto x: div) cout << x << " ";
//    cout << endl;

    for(auto x: div) cout << (char)('a'+x);
    cout << endl;
    return 0;
}