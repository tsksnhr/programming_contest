#include <bits/stdc++.h>
using namespace std;

double a, b, x;

int main(){

    cin >> a >> b >> x;
    
    double l, theta;

    if (x <= a*a*b/2){
        l = (2*x)/(a*b);
        theta = (atan(b/l)*180)/3.141592;
    }
    else{
        l = (2*a*a*b - 2*x)/(a*a);
        theta = (atan(l/a)*180)/3.141592;
    }

    cout << fixed << setprecision(15);
    cout << theta << endl;
    return 0;
}