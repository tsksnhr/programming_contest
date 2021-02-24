#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    vector<ll> array(25, 0);
    array.at(0) = 100;
    array.at(1) = 100;
    array.at(2) = 200;

    for (int i = 3; i < 20; i++){
        array.at(i) = array.at(i-1) + array.at(i-2) + array.at(i-3);
    }

    cout << array.at(19) << endl;
    return 0;
}