// Tiny Arithmetic Sequence

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    vector<int> array(3);
    for (int i = 0; i < 3; i++) cin >> array.at(i);
    sort(array.begin(), array.end());

    if (array.at(1) - array.at(0) == array.at(2) - array.at(1)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}