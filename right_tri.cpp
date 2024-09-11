// Name: Yadav Sandeep
// college: VGEC (Power Electronics)
// 25GRC1059

#include <iostream>
using namespace std;

int main() {
  float a, b, c;

  cout << "Enter triangle data: \n";
  cout << "First side: ";
  cin >> a;

  cout << "Second side: ";
  cin >> b;

  cout << "Third side: ";
  cin >> c;


  float as, bs, cs;
  as = a*a;
  bs = b*b;
  cs = c*c;

  if (as == (bs + cs)) {
    cout << "triangle is right angled";
  }

  else if (bs == (as + cs)) {
    cout << "triangle is right angled";
  }

  else if (cs == (as + bs)) {
    cout << "triangle is right angled";
  }

  else {
    cout << "Not right angle triangle";
  }



  return 0;
}
