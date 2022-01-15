#include <bits/stdc++.h>
using namespace std;
using  ll = long long;

int main(){

    int N;
    string number_str;
    cin >> N >> number_str;

    int ans = 0;
    for (int i = 0; i < 1000; i++){
        string pin_str = to_string(i);
        int digit = pin_str.size();

        if (digit == 1) pin_str = "00" + pin_str;
        else if (digit == 2) pin_str = "0" + pin_str;

        int pos = 0;
        for (int j = 0; j < number_str.size(); j++){
            if (pin_str.at(pos) == number_str.at(j)) pos++;
            if (pos == 3) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}