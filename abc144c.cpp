//  解説を見た後じゃないと実装できませんでした

#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e12;

long long n;

int main(){

    cin >> n;
    long long lim;
    lim = sqrt(n) + 1;

    long long i, x, y, x_mem = 1, y_mem = 1, distance, min = INF;
    for (i=1; i<=lim; i++){
        x = i;
        y = n/x;
        distance = x + y - 2;
//        cout << distance << endl;
        if ((n == x*y) && (distance < min)){
            min = distance;
            x_mem = x;
            y_mem = y;
        }
    }

//    cout << "x = " << x_mem << " y = " << y_mem << endl;
    cout << min << endl;
    return 0;
}