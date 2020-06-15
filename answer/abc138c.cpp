#include <bits/stdc++.h>
using namespace std;

double calc(int num, vector<double> v);

int n;

int main(){

    cin >> n;
    vector<double> v(n);
    for (int i=0; i<n; i++){
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());

    double ans;
    ans = calc(n - 1, v);

    cout << fixed << setprecision(10);
    cout << ans << endl;
    return 0; 
}

double calc(int num, vector<double> v){

    if (num == 1){
        return (v.at(1) + v.at(0))/2.0;
    }
    else{
        return (v.at(num) + calc(num-1, v))/2.0;
    }
}