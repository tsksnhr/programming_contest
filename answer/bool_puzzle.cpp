#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと

  if (a) {              //true
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) {        //通らない
    cout << "Bo";
  }
  else if (!b || c) {   //b is true 
    cout << "Co";
  }

  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) {   //c is true
    cout << "der";
  }

  cout << endl;
}
