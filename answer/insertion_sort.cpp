// Insertion Sort
// ALDS1_1_A

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &array){

    int size = array.size();
    for (int i = 1; i < size; i++){
        int value = array.at(i);
        int j = i - 1;

        while (j >= 0 && array.at(j) > value){
            array.at(j+1) = array.at(j);
            j--;
        }
        array.at(j+1) = value;

        for (int i = 0; i < size-1; i++) cout << array.at(i) << " ";
        cout << array.back() << endl;
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> array(N);
    for (int i = 0; i < N; i++) cin >> array.at(i);

    for (int i = 0; i < N-1; i++) cout << array.at(i) << " ";
    cout << array.back() << endl;

    insertion_sort(array);

    return 0;
}