#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, i, f, ans, sum;
  int ftls[] = {1, 2, 6, 24, 120, 720, 5040, 40320};

  cin >> n;

  i = 7;
  ans = 0;
  sum = 0;

  while (sum < n) {
    f = ftls[i];

    if (sum + f <= n) {
      sum += f;
      ans++;
    } else {
      i--;
    }
  }

  cout << ans << "\n";

  return 0;
}