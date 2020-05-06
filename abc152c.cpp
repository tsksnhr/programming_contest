#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }

    vector<int> M(N);

    int min = N+1;
    for (int i=0; i<N; i++){
        if (A.at(i) < min){
            min = A.at(i);
        }
        M.at(i) = min;
    }

    int count = 0;
    for (int i=0; i<N; i++){
        if (A.at(i) == M.at(i)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}