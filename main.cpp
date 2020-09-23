#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double radius;
  float pi;
  float volum;

  pi = 3.1416;

  cout << "Cat este radius? ";
  cin >> radius;

  volum = 4 * pi * radius * radius * radius / 3;

  cout << "Volumul unei sfere cu radian " << radius << " este " << volum << endl;

  return 0;
  
}// volumul unei sfere este 4π R³ / 3