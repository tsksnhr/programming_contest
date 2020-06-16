#include <bits/stdc++.h>
using namespace std;


void permutation(vector<int> &array, vector<bool> &used, int pos = 0){
    
    int size = used.size();

    if (pos == size){
        for (auto x: array){
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    for (int i=0; i<size; i++){
        int temp = i + 1;
        if (used.at(i) == false){
            used.at(i) = true;
            array.at(pos) = temp;
            permutation(array, used, pos+1);
            used.at(i) = false;
        }
    }
}


int main(){

    int num;
    cin >> num;
    vector<bool> used(num);
    vector<int> array(num);

    permutation(array, used);
}