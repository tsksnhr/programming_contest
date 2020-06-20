#include <bits/stdc++.h>
using namespace std;

void sieve(int num, vector<int> &ans){

    int base, cnt;
    vector<bool> used(num+1, true);

    if (num == 1){
        ans.push_back(1);
        return;
    }
    else{
        for (base=2; base<=sqrt(num); base++){
            cnt = 2;
            while (base*cnt<=num){
                used.at(base*cnt) = false;
                cnt++;
            }
        }
    }

    for (int i=1; i<=num; i++){
        if (used.at(i) == true) ans.push_back(i);
    }
    return;
}


int main(){

    int test;
    cin >> test;
    vector<int> ans;

    sieve(test, ans);

    for (auto x: ans) cout << x << " ";
    cout << endl;
    return 0;
}