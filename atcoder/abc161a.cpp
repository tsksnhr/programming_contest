#include <bits/stdc++.h>
using namespace std;

int main(void){

    int x, y, z;
    int temp;
    cin >> x >> y >> z;

    temp = y;
    y = x;
    x = temp;

    temp = z;
    z = x;
    x = temp;

    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}