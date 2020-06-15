#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  string text;
  int N;

  cin >> p;

  // パターン1
  if (p == 1) {
//    int price;
    cin >> price >> N;
  }

  // パターン2
  if (p == 2) {
//    string text;
//    int price;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
  }

//  int N;
//  cin >> N;


  cout << price * N << endl;
}
