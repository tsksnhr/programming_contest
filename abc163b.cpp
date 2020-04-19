#include <bits/stdc++.h>
using namespace std;

int main(){

    int days;
    int num;
    cin >> days >> num;

    vector<int> h_num(num);
    int i;
    int sum = 0;

    for (i=0; i<num; i++){
        cin >> h_num.at(i);
        sum += h_num.at(i);
    }

    if (days >= sum){
        cout << days-sum << endl;
        return 0;
    }
    else{
        cout << -1 << endl;
        return 0;
    }

}