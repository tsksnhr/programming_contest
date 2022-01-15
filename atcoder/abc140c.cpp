#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(105);
vector<int> B(105);

int main(){

    cin >> N;
    for (int i=0; i<N-1; i++){
        cin >> B.at(i);
        A.at(i) = B.at(i);
    }
    A.at(N-1) = B.at(N-2);

    for (int i=0; i<N-1; i++){
        if (max(A.at(i), A.at(i+1)) > B.at(i)){
            if (A.at(i) > B.at(i)){
                A.at(i) = B.at(i);
            }
            if (A.at(i+1) > B.at(i)){
                A.at(i+1) = B.at(i);
            }
        }
    }

    int sum = 0;
    for (int i=0; i<N; i++){
        sum += A.at(i);
    }

    cout << sum << endl;
    return 0;
}