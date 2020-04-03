#include <bits/stdc++.h>
using namespace std;

int main(void){

    int a, b, c, total;
    int i, j, k;
    int amount, count;

    amount = 0;
    count = 0;

    cin >> a >> b >> c >> total;

    for (i=0; i<a+1; i++){
        for (j=0; j<b+1; j++){
            for (k=0; k<c+1; k++){
                    
                    amount = 500*i+100*j+50*k;

                    if (amount == total){
                        count++;
                    }
            }
        }
    }

    cout << count << endl;

    return 0;
}