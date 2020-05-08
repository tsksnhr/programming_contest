#include <bits/stdc++.h>
using namespace std;

vector<int> a(10);

int main(){

    int i;
    for (i=0; i<10; i++){
        a.at(i) = i;
    }

    for (i=0; i<5; i++){
        cout << a.at(i) << " ";
    }
    cout << endl;

    for (i=0; i<10; i++){
        cout << a.at(i) << " ";
    }
    cout << endl;

    return 0;
}