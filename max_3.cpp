#include <iostream>
using namespace std;

int main () {
  float a, b, c;

  cout << "Enter first num: ";
  cin >> a;

  cout << "Enter second num: ";
  cin >> b;

  cout << "Enter third num: ";
  cin >> c;

  if ((a > b) and (a > c)) {
    cout << a<<" is max";
  }

  else if ((b > a) and (a > c)) {
    cout <<b<<" is max";
  }

  else if ((c > a) and (c > b)) {
    cout << c<<" is max";
  }

  else {
    cout << "Numbers are equal";
  }

  return 0;
}
