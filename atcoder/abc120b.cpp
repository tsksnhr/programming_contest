#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int A, B, K;
    cin >> A >> B >> K;

    vector<int> mod_dataset;
     for (int i = 1; i <= 100; i++){
        int mod_A, mod_B;
        mod_A = A%i;
        mod_B = B%i;

        if ((mod_A == 0) && (mod_B == 0)) mod_dataset.push_back(i);
    }

    int pos = mod_dataset.size() - K;
    cout << mod_dataset.at(pos) << endl;
    
    return 0;
}