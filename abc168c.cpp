#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

int main(){

    double a, b, h, m;
    cin >> a >> b >> h >> m;

    if (h>11){
        h -= 12;
    }

    double theta, theta_alt, theta_min;
    theta = abs((360.0/12.0)*h +(360.0/12.0)*(m/60.0)  - (360.0/60.0)*m);
    theta_alt = 360.0 - theta;
    theta_min = min(theta, theta_alt);

//    theta = atan(b/a);

    double ans;
    ans = a*a + b*b - 2*a*b*cos(theta_min*3.14159265359/180.0);
//    ans = a*a + b*b - 2*a*b*cos(theta);
    ans = sqrt(ans);

    cout << fixed << setprecision(15);
    cout << ans << endl;
    return 0;    
}