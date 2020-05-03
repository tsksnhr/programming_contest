#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin >> num;

    int i, j, temp;
    vector<int> array(num);

    cout << "--- input array ---" << endl;
    for (i=0; i<num; i++){
        array.at(i) = num-1-i;
        cout << array.at(i) << " ";
    }
    cout << endl;

    for (i=0; i<num; i++){

        for (j=num-1; j>i; j--){
            if (array.at(j) < array.at(j-1)){
                temp = array.at(j);
                array.at(j) = array.at(j-1);
                array.at(j-1) = temp;
            }
        }
    }

    cout << "--- sorted array ---" << endl;
    for (i=0; i<num; i++){
        cout << array.at(i) << " ";
    }
    cout << endl;

}