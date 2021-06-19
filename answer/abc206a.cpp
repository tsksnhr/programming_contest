// Maxi-Buying

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;

    int ans = (double)N*1.08;
    if (ans < 206) cout << "Yay!" << endl;
    else if (ans == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;

    return 0;
}