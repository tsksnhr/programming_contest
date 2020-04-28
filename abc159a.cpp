#include <bits/stdc++.h>
using namespace std;

int even_num, odd_num;

int main(){

    cin >> even_num >> odd_num;

    int even_c=0, odd_c=0;

    if (even_num<2){
        even_c =0;
    }
    else
    {
        even_c = (even_num*(even_num-1))/2;
    }
    
    if (odd_num<2){
        odd_c =0;
    }
    else{
        odd_c = (odd_num*(odd_num-1))/2;
    }


    /*
    cout << kaijo_a << endl;
    cout << kaijo_c << endl;
    cout << even_c << endl;
    cout << odd_c << endl;
    */
    cout << even_c+odd_c << endl;
    return 0;
}