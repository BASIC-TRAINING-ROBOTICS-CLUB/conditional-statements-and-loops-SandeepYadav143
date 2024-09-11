// Name: Yadav Sandeep
// College: VGEC (Power Electronics)
// 25GRC1059

#include <iostream>
using namespace std;

int main () {
  float a, b, c; // tringale sides
  
  cout << "Enter triangle data:\n";

  cout << "First side: ";
  cin >> a;

  cout << "Second side: ";
  cin >> b;

  cout << "Third side: ";
  cin >> c;

  if ((a == b) and (b==c)) {
    cout << "Triangle is equilateral";
  }
  else {
    cout << "Not equilateral";
  }
}
