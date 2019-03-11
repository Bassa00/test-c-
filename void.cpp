#include <iostream>

using namespace std;

void msg (int r, double h);

int main () {
  int rate = 16;
  double hours = 32.5;
  msg (rate, hours);
}

void msg (int r, double h) {
  cout << "$" << r*h << " were earned";
}
