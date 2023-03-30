#include <iostream>
 
using namespace std;
 
int main() {
  int n, k, f;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> k;

    for (int j = 0; j < k; j++) {
      cin >> f;

      if (f == 1) cout << "Rolien\n";
      if (f == 2) cout << "Naej\n";
      if (f == 3) cout << "Elehcim\n";
      if (f == 4) cout << "Odranoel\n";
    }
  }
}