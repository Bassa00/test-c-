#include <iostream>
#include <string>

using namespace std;

int main () {

  class school {
    private: string name; int marks;
    public: void getData(); void displayData ();
  },

  voidschool::getData() {
    cout << "enter student name: " << endl;
    cin >> name;
    cout << "enter student mrks: " << endl;
    cin >> marks;
  }

  void school::displayData() {
    cout << "student name: " << name <<endl;
    cout << "student marks: " << marks <<endl;
  }
}