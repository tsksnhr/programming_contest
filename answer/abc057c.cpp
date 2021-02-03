#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    int root_N = sqrt(N);
    int B = 0, mod = 0;
    int A_digit = 0, B_digit = 0, digit = 0;
    int ans = 11;
    for (int i = 1; i <= root_N; i++){
        mod = N%i;

        if (mod == 0){
            B = N/i;
            A_digit = to_string(i).size();
            B_digit = to_string(B).size();
            digit = max(A_digit, B_digit);
        }

        ans = min(digit, ans);
    }

    cout << ans << endl;
    return 0;
}