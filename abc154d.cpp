#include <bits/stdc++.h>
using namespace std;

double expectation(double num, double num_mem);

int main(){

    int N, K;
    cin >> N >> K;

    vector<double> E(N);
    int temp;

    for (int i=0; i<N; i++){
        cin >> temp;
        E.at(i) = expectation(temp, temp);
    }
    /*
    for (int i=0; i<N; i++){
        cout << E.at(i) << " ";
    }
    cout << endl;
    */

    vector<double> E_sum(N);
    E_sum.at(0) = E.at(0);
    for (int i=1; i<N; i++){
        E_sum.at(i) = E.at(i) + E_sum.at(i-1);
    }
    /*
    for (int i=0; i<N; i++){
        cout << E_sum.at(i) << " ";
    }
    cout << endl;
    */

    double sum = 0;
    double E_max = 0;
    for (int i=0; i<(N-K+1); i++){
        if (i == 0){
            sum = E_sum.at(i+K-1);
        }
        else{
            sum = E_sum.at(i+K-1) - E_sum.at(i-1);    
        }

        if (E_max < sum){
            E_max = sum;
        }
    }

    //  桁数を指定しないとACにならない、double型では気を付けること
    cout << fixed << setprecision(15);
    cout << E_max << endl;
    return 0;
}

double expectation(double num, double num_mem){

    if (num == 1){
        return 1.0/num_mem;
    }
    else{
        return (num/num_mem) + expectation(num-1.0, num_mem);
    }
}