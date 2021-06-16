// Selection Sort

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

int selection_sort(int N, vector<int> &A){

    int cnt = 0;

    for (int i = 0; i < N-1; i++){
        int min_pos = i;
        bool is_change = false;

        for (int j = i+1; j < N; j++){
            if (A.at(j) < A.at(min_pos)){
                min_pos = j;
                is_change = true;
            }
        }
        if (is_change){
            swap(A.at(min_pos), A.at(i));
            cnt++;
        }
    }

    return cnt;
}

int main(){

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int cnt = selection_sort(N, A);

    outputarray(A);
    cout << cnt << endl;

    return 0;
}