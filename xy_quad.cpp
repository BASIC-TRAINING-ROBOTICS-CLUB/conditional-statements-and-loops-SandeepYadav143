#include <iostream>
using namespace std;

int main() {
  float x, y;

  cout << "Enter x coord: ";
  cin >> x;

  cout << "Enyer y coord: ";
  cin >> y;

  if ((x > 0) and (y > 0)) {
    cout << "Point is in 1st quad";
  }

  else if ((x < 0) and (y > 0)) {
    cout << "Point is in 2nd quad";
  }

  else if ((x < 0) and (y < 0)) {
    cout << "Point is in 3rd quad";
  }

  else if ((x > 0) and (y < 0)) {
    cout << "Point is in 4th quad";
  }

  else {
    cout << "Point is origin";
  }

  return 0;
}
