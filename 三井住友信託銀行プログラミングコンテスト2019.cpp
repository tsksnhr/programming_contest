#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){

    cin >> n >> s;

    string ref;
    int aflg = 0, bflg = 0, cflg = 0, cnt = 0, tmp, flg = 0;
    vector<int> ans;

    for (int a=0; a<10; a++){
        for (int b=0; b<10; b++){
            for (int c=0; c<10; c++){
                for (int i=0; i<n; i++){
//                    cout << " a = " << a << " b = " << b << " c = " << c << " s.at(i) = " << s.at(i) << endl;
                    if ((s.at(i) == (to_string(a)).at(0)) && (aflg != 1)){
                        aflg = 1;
                        continue;
                    }
                    if ((s.at(i) == (to_string(b)).at(0)) && (aflg == 1) && (bflg != 1)){
                        bflg = 1;
                        continue;
                    }
                    if ((s.at(i) == (to_string(c)).at(0)) && (aflg == 1) && (bflg == 1) && (cflg != 1)){
                        cflg = 1;
                        continue;
                    }
//                    cout << " aflg = " << aflg << " bflg = " << bflg << " cflg = " << cflg << endl;
                }
                if ((aflg == 1) && (bflg == 1) && (cflg == 1)){
                    /*
                    tmp = a*1e2 +
                     b*10 + c;
                    for (int x=0; x<ans.size(); x++){
                        if (tmp == ans.at(x)){
                            flg = 1;
                            break;
                        }
                    }
                    if (flg == 0) cnt++;
                    ans.push_back(tmp);
                    */
                   cnt++;
                }
                aflg = 0;
                bflg = 0;
                cflg = 0;
                flg = 0;
            }
        }
    }
/*
    for (int x: ans){
        cout << x << endl;
    }
*/
    cout << cnt << endl;
    return 0;
}