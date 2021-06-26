// Koch Curve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll N;

void solver(double px, double py, double qx, double qy, ll cnt){

    double sx, sy, tx, ty, ux, uy;
    
    // vector
    sx = (px*2. + qx)/3.;
    sy = (py*2. + qy)/3.;
    tx = (px + qx*2.)/3.;
    ty = (py + qy*2.)/3.;

    // rotate matrix
    ux = (tx - sx)*cos(M_PI/3.) - (ty - sy)*sin(M_PI/3.);
    ux += sx;
    uy = (tx - sx)*sin(M_PI/3.) + (ty - sy)*cos(M_PI/3.);
    uy += sy;

    if (cnt == N){
        cout << px << " " << py << endl;
        cout << sx << " " << sy << endl;
        cout << ux << " " << uy << endl;
        cout << tx << " " << ty << endl;
    
        return;
    }
    
    solver(px, py, sx, sy, cnt + 1);
    solver(sx, sy, ux, uy, cnt + 1);
    solver(ux, uy, tx, ty, cnt + 1);
    solver(tx, ty, qx, qy, cnt + 1);

    return;
}

int main(){

    cin >> N;

    cout << setprecision(10);
    if (N == 0) cout << 0. << " " << 0. << endl;
    else solver(0., 0., 100., 0., 1);
    cout << 100. << " " << 0. << endl;

    return 0;
}