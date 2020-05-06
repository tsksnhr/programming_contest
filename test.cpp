#include <bits/stdc++.h>
using namespace std;

double expectation(double num, double num_mem);

int main(){

    int N, k, temp, digit, first, last;
    cin >> N;

    for (k=1; k<=N; k++){
        digit = 0;
        temp = k;

        while (temp>0){
            temp /= 10;
            digit++;
        }

        last = k%10;
        if (digit > 1){
            first = k/(10*(digit-1));  //   アホやん
        }
        else{
            first = last;
        }

        cout << "k = " << k << endl;
        cout << "digit = " << digit << endl;
        cout << first << " " << last << endl;
    }

}