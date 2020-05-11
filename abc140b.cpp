#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(25);
vector<int> B(25);
vector<int> C(25);

int main(){

    cin >> N;
    for (int i=1; i<=N; i++){
        cin >> A.at(i);
    }
    for (int i=1; i<=N; i++){
        cin >> B.at(i);
    }
    for (int i=1; i<=N-1; i++){
        cin >> C.at(i);
    }

    int satis = 0;
    int mem = 0;
    for (int i=1; i<=N; i++){
        satis += B.at(A.at(i));
        if (mem + 1 == A.at(i)){
            satis += C.at(mem); 
        }
        mem = A.at(i);
    }

    cout << satis << endl;
    return 0;
}