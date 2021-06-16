// Stable Sort
// ALDS1_2_C

#include <bits/stdc++.h>
using namespace std;

void outputarray(vector<pair<char, int>> &A){

    for (int i = 0; i < A.size(); i++){
        cout << A.at(i).first << A.at(i).second;
        if (i != A.size() - 1) cout << " ";
        else cout << endl;
    }

    return;
}

void bubble_sort(int N, vector<pair<char, int>> &A){

    bool is_sorted = false;
    int unsort_pos = 0;

    while (!is_sorted){
        is_sorted = true;

        for (int i = N-1; i > unsort_pos; i--){
            if (A.at(i).second < A.at(i-1).second){
                swap(A.at(i), A.at(i-1));
                is_sorted = false;
            }
        }
        unsort_pos++;
    }

    return;
}

void selection_sort(int N, vector<pair<char, int>> &A){

    for (int i = 0; i < N-1; i++){
        int min_pos = i;

        for (int j = i+1; j < N; j++){
            if (A.at(j).second < A.at(min_pos).second){
                min_pos = j;
            }
        }
        if (min_pos != i) swap(A.at(i), A.at(min_pos));
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<pair<char, int>> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i).first >> A.at(i).second;

    vector<pair<char, int>> B = A;
    vector<pair<char, int>> S = A;

    bubble_sort(N, B);
    selection_sort(N, S);

    outputarray(B);
    cout << "Stable" << endl;
    outputarray(S);
    if (B == S) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    return 0;
}