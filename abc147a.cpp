#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){

    cin >> a >> b >> c;

    if (a+b+c>21){
        cout << "bust" << endl;
    }
    else{
        cout << "win" << endl;
    }
    return 0;
}