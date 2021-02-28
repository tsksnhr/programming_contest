#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    bool is_even = false;
    is_even = (N%2 == 0);

    ll sum_required = 0;
    if (is_even) sum_required = (N/2)*(N+1);
    else sum_required = (N/2)*(N+1) + (N/2+1);

    ll sum_wood = sum_required + (N+1);
    ll dif = sum_wood - sum_required;

    bool not_enough = true;
    ll throw_wood = 0;
    ll cnt = 1;
    while (not_enough){
        throw_wood += cnt;

        if (throw_wood > dif) not_enough = false;
        else cnt++;
    }
    cnt--;
//    cerr << cnt << endl;

    cout << (N+1) - cnt << endl;
    return 0;
}