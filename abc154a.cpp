#include <bits/stdc++.h>
using namespace std;

int main(){

    string S, T;
    int a, b;
    cin >> S >> T >> a >> b;

    string compare;
    cin >> compare;

    if (compare == S){
        cout << a-1 << " " << b << endl;
    }
    else{
        cout << a << " " << b-1 << endl;
    }
    return 0;
}