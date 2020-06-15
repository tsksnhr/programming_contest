#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e8;

void prime_div(long long num);

long long n;
vector<int> used(INF);

int main(){

    cin >> n;

    prime_div(n);
    
    long long sum = 1;
    cout << n << " = ";
    for (int i=0; i<=n; i++){
        if (used.at(i) != 0){
            cout << i << "^" << used.at(i);
            for (int j=1; j<=used.at(i); j++){
                sum *= i;
            }
            if (sum != n){
                cout << " + ";
            }
        }
    }
    cout << endl;

    return 0;
}

void prime_div(long long num){

    long long num_temp = num;

    for (long long i=2; i<=num; i++){
        if (num == 1){
            break;
        }
        while (num%i == 0){
            num /= i;
            used.at(i)++;
        }
    }
}