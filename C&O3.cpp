#include <iostream>

using namespace std;

class demo1 {
  public : 
    void showData() {
      cout << "Hi, this is classes and objects DEMO1" << endl;
    }
};

class demo2 {
  public :
    void showData() {
      cout << "Hi, this is classes and objects DEMO2" << endl;
    }
};

int main() {
  demo1 obj1; //object of demo1 class
  demo2 obj2; //object of demo2 class

  obj1.showData();
  obj2.showData();
}