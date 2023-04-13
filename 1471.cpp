#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, s;

  while (cin >> t >> s) {
    vector<int> v(t+1);

    for (int i = 0; i < s; i++) {
      int a;
      cin >> a;
      v[a] = a;
    }

    if (t == s) cout << "*\n";
    else {
      for (int i = 1; i <= t; i++) {
        if (v[i] == 0) cout << i << " ";
      }
      cout << "\n";
    }
  }   
  return 0;
}
