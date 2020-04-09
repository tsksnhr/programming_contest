#include <bits/stdc++.h>
using namespace std;

int main(){

    int count_true=0, count_false=0;

    bitset<8> a("01010101");

    a <<= 1;

    cout << a << endl;

    return 0;
}