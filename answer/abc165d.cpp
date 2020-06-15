#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int64_t A, B, X;
    cin >> A >> B >> X;

    int64_t temp;

    if (X<B){
        temp = X;
        cout << (int)((A*temp)/B) - (A*(int)(temp/B)) << endl; 
    }
    else{
        temp = B-1;
        cout << (int)((A*temp)/B) - (A*(int)(temp/B)) << endl;
    }

    return 0;
}