#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    vector<ll> array(5);
    for (int i = 0; i < 5; i++) cin >> array.at(i);

    vector<ll> sum_array;
    map<ll, ll> sum_dict;
    while (true){
        ll buf = 0;
        for (int i = 0; i < 3; i++){
            buf += array.at(i);
        }
        if (!sum_dict.count(buf)){
            sum_array.push_back(buf);
            sum_dict[buf]++;
        }

        if (!next_permutation(array.begin(), array.end())) break;
    }

    sort(sum_array.begin(), sum_array.end());

    cout << sum_array.at(sum_array.size()-3) << endl;
    return 0;
}