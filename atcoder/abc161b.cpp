#include <bits/stdc++.h>
using namespace std;

int main(void){

    int n, m;
    cin >> n >> m;

    int i, count, sum;
    vector<int> a(n);

    sum = 0;
    count = 0;

    for (i=0; i<n; i++){
        cin >> a.at(i);
    }

    for (i=0; i<n; i++){
        sum += a.at(i);
    }

    for (i=0; i<n; i++){
        if (a.at(i) >= ((double)sum/((double)(4*m)))){      // 整数と整数の割り算は小数点以下が切り捨てられる
            count++;
        }
    }

    if (count >= m){
//        cout << sum << " " << count  << " " << (sum/(4*m)) << endl;
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}