#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;

void is_prime(ll num, vector<ll> &array1, vector<ll> &array2);

int main(){

    ll n;
    cin >> n;
    vector<ll> prime_flg(n, 1);
    vector<ll> prime;

    is_prime(n, prime_flg, prime);
    
    for (auto x: prime){
        cout << x << endl;
    }
    return 0;
}

void is_prime(ll num, vector<ll> &array1, vector<ll> &array2){

    bool flg = false;

    ll pos = 2;
    array2.push_back(pos);
    ll index, i = 1;
    while (pos <= sqrt(num)){
        index = pos*i;

        if (index > array1.size()){
            i=0;
            for (int i=pos; i<array1.size(); i++){
                if (array1.at(i) == 1){
                    pos = i;
                    array2.push_back(pos);
                    flg = true;
                    break;
                }
            }
        }

        if (array1.at(index) == 1){
            array1.at(index) = 0;
        }
        i++;


    }

    return;
}