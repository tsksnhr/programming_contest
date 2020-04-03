#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    int N, i, sum, avg;
    cin >> N;

    vector <int> A(N);

    sum = 0;
    avg = 0;
    
    for (i=0; i<N; i++){
        cin >> A.at(i);
        sum += A.at(i);
    }

    avg = sum/N;

    for (i=0; i<N; i++){
        cout << abs(avg-A.at(i)) << endl;
    }

    return 0;
}