#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(103);

int main(){

    cin >> N;
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    vector<double> B(103);
    double sum = 0;
    for (int i=0; i<N; i++){
        B.at(i) = 1.0/A.at(i);
        sum += B.at(i);
    }

    double ans = 0;
    ans = 1.0/sum;

    cout << fixed << setprecision(10);
    cout << ans << endl;
    return 0;
}