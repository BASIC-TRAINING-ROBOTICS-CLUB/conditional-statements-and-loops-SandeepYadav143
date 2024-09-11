#include <iostream>
using namespace std;

int main() {
  int n, res;

  cout << "Enter a num: ";
  cin >> n;

  res = n;
  for (int i=(n-1); i>=1; i--) {
    res *= i;
  }

  cout << n<<"! is equal to "<<res;
  return 0;
}
