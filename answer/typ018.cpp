// Statue of Chokudai

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    double T, L, X, Y;
    cin >> T >> L >> X >> Y;

    double Q;
    cin >> Q;

    vector<double> ans(Q, -1);
    for (int i = 0; i < Q; i++){
        ll E;
        double ans_buf;
        cin >> E;

        ll E_mod = E%(ll)T;
        double rad = (E_mod/T)*(2*M_PI);
//        cerr << "rad = " << rad << endl;
        double y_i = (L/2.)*sin(rad);
        double z_i = (L/2.)*cos(rad);

        y_i *= -1.;
        z_i *= -1.;
        z_i += L/2.;

        double length_H, length_W;
        length_H = z_i;
        length_W = X*X + abs(y_i - Y)*abs(y_i - Y);
        length_W = sqrt(length_W);

        ans_buf = atan(length_H/length_W);
//        cerr << "ans_buf = " << ans_buf << endl;
        ans_buf *= 180./M_PI; 

        ans.at(i) = ans_buf;    
    }

    cout << setprecision(10);
    for (auto x: ans) cout << x << endl;
    return 0;
}