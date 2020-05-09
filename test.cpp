#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a(10, 10);

    for (int &x: a){
        x = 0;
    }

    for (int x: a){
        cout << x << " ";
    }

    return 0;
}