#include <bits/stdc++.h>
using namespace std;

void Permutation(int pos, int num);

int N;
vector<int> A(8);
vector<int> B(8);

vector<int> P(8);
vector<int> used(10);
vector<vector<int>> P_all;
int a_idx, b_idx;

int main(){

    cin >> N;

    for (int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for (int i=0; i<N; i++){
        cin >> B.at(i);
    }

    /*
    for (int i=0; i<A.size(); i++){
        cout << A.at(i);
    }
    cout << endl;
    for (int i=0; i<B.size(); i++){
        cout << B.at(i);
    }
    cout << endl;
    */

    Permutation(0, N);
    sort(P_all.begin(), P_all.end());

    for (int i=0; i<P_all.size(); i++){
        if (P_all.at(i) == A){
//            cout << "A" << endl;
            a_idx = i;
        }
        if (P_all.at(i) == B){
//            cout << "B" << endl;
            b_idx = i;
        }
    }

    cout << abs(b_idx-a_idx) << endl;
    return 0;
}



void Permutation(int pos, int num){

    if (pos == num){

        /*
        for (int i=0; i<P.size(); i++){
            cout << P.at(i);
        }
        cout << endl;
        */

        P_all.push_back(P);
        return;
    }

    for (int i=1; i<=num; i++){

        if (used.at(i) == 0){
            P.at(pos) = i;
            used.at(i) = true;

            Permutation(pos+1, num);
            used.at(i) = false;
        }
    }
}