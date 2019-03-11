#include <iostream>

using namespace std;

class ABC {
  private:
    int number;
  
  public:
    void getData(int);
    void displayData();
};

void ABC::getData(int x) {
  number = x;
};

void ABC::displayData() {
  cout << "Hello this is ABC. value inside number is "<< number << endl;
}

class XYZ {
  private: 
    int number;

  public: 
    void getData(int);
    void displayData();
};

void XYZ::getData(int a) {
  number = a;
};

void XYZ::displayData() {
  cout <<"Hello this is XYZ. value inside number is " << number << endl;
};

int main () {
  ABC x_obj1;
  XYZ a_obj1;

  x_obj1.getData(45);
  a_obj1.getData(55);

  x_obj1.displayData();
  a_obj1.displayData();

}