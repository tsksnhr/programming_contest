#include <bits/stdc++.h>
using namespace std;

int main(void){

    int a, b, i;
    string a_bar, b_bar;

    i = 0;

    cin >> a >> b;          // input

    cout << "A:";
    while(i < a){
        cout << "]";        // bar graph
        i++;                // increment
    }
    cout << endl;           // start a new line
    i = 0;                  // initialize

    cout << "B:";
    while (i < b)
    {
        cout << "]";        // bar graph
        i++;                // increment
    }
    cout << endl;           // start a new line

    return 0;    
}