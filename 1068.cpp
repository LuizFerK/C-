#include <bits/stdc++.h>

using namespace std;

int main() {
  string exp;
  
  while (cin >> exp) {
    int op = 0, cp = 0;

    for (int i = 0; i < exp.length(); i++) {
      if (exp[i] == '(') op++;
      if (exp[i] == ')') cp++;
      if (op < cp) break;
    }

    if (op != cp) cout << "incorrect\n";
    else cout << "correct\n";
  }

  return 0;
} 