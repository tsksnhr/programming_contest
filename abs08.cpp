#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, i;
    int count;

    count = 1;

    cin >> N;

    vector<int> num(N);

    for (i=0; i<N; i++){
        cin >> num.at(i);
    }

    sort(num.begin(), num.end());

    for (i=0; i<N-1; i++){
        if (num.at(i) < num.at(i+1)){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}