// Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void outputarray(vector<int> &A){

    for (int i = 0; i < A.size(); i++){
        cout << A.at(i);
        if (i != A.size() - 1) cout << " ";
        else cout << endl;
    }

    return;
}

int bubble_sort(int N, vector<int> &A){

    int cnt = 0;
    bool is_OK = 0;
    int pos = 0;

    while (!is_OK){
        is_OK = 1;

        for (int i = N-1; i > pos; i--){
            if (A.at(i-1) > A.at(i)){
                int tmp = A.at(i);
                A.at(i) = A.at(i-1);
                A.at(i-1) = tmp; 
                is_OK = 0;
                cnt++;
            }
        }
        pos++;
    }

    return cnt;
}

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int cnt = bubble_sort(N, A);

    outputarray(A);
    cout << cnt << endl;

    return 0;
}