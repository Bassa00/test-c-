#include <iostream>

using namespace std; 

class complex {
  private: 
    int first, second;

  public: 
    void getData(int x, int y) {
      first = x;
      second = y;
    }
    void showData();
};

void complex::showData() {
  cout << "first = " << first << "\nSecond = " << second <<endl; 
};

int main() {
  complex c1, c2, c3;
  c1.getData(5,10);
  c2.getData(25,15);
  c3 = c1+c2;
  c3.showData() 
};