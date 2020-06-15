#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, diff;
    vector <int> length(3);
    
    for (i=0; i<3; i++){
        cin >> length.at(i);
    }

    sort(length.begin(), length.end());

    diff = length.at(2) - length.at(0);

    cout << diff << endl;
}