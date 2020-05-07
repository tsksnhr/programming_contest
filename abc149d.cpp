#include <bits/stdc++.h>
using namespace std;

int n, k;
int r,s,p;
string t, t_alt;
long long sum;

int main(){

    cin >> n >> k >> r >> s >> p;
    cin >> t;

    sum = 0;
    for (int i=0; i<n; i++){
//        cout << "i = " << i << endl;
//        cout << "t_alt = " << t_alt << endl;
        if (i-k<0){
            if (t.at(i) == 'r'){
                t_alt.push_back('p');
                sum += p;
            }
            else if (t.at(i) == 's'){
                t_alt.push_back('r');
                sum += r;
            }
            else if (t.at(i) == 'p'){
                t_alt.push_back('s');
                sum += s;
            }
            else continue;
        }
        else{
            //  t.at(i) == 'r'
            if ((i+k>=n) && (t.at(i) == 'r') && (t_alt.at(i-k) == 'p')){
                t_alt.push_back('s');   //  p以外であればOK
            }
            else if ((i+k<n) && (t.at(i) == 'r') && (t_alt.at(i-k) == 'p') && (t.at(i+k) == 'r')){
                t_alt.push_back('s');   //  p以外であればOK
            }
            else if ((i+k<n) && (t.at(i) == 'r') && (t_alt.at(i-k) == 'p') && (t.at(i+k) == 's')){
                t_alt.push_back('s');   //  rとpはダメ
            }
            else if (t.at(i) == 'r'){
                t_alt.push_back('p');
                sum += p;
            }

            //  t.at(i) == 's'
            else if ((i+k>=n) && (t.at(i) == 's') && (t_alt.at(i-k) == 'r')){
                t_alt.push_back('p');   //  r以外であればOK
            }
            else if ((i+k<n) && (t.at(i) == 's') && (t_alt.at(i-k) == 'r') && (t.at(i+k) == 's')){
                t_alt.push_back('p');   //  r以外であればOK
            }
            else if ((i+k<n) && (t.at(i) == 's') && (t_alt.at(i-k) == 'r') && (t.at(i+k) == 'p')){
                t_alt.push_back('p');   //  rとsはダメ
            }
            else if (t.at(i) == 's'){
                t_alt.push_back('r');
                sum += r;
            }

            //  t.at(i) == 'p'
            else if ((i+k>=n) && (t.at(i) == 'p') && (t_alt.at(i-k) == 's')){
                t_alt.push_back('r');   //  sはダメ
            }
            else if ((i+k<n) && (t.at(i) == 'p') && (t_alt.at(i-k) == 's') && (t.at(i+k) == 'r')){
                t_alt.push_back('r');   //  pとsはダメ
            }
            else if ((i+k<n) && (t.at(i) == 'p') && (t_alt.at(i-k) == 's') && (t.at(i+k) == 'p')){
                t_alt.push_back('r');   //  sはダメ
            }
            else if (t.at(i) == 'p'){
                t_alt.push_back('s');
                sum += s;
            }

            else continue;
        }
    }

    cout << t_alt << endl;
    cout << sum << endl;
    return 0;
}