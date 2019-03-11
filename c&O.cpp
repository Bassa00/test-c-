#include <iostream>
#include <string>

using namespace std;

  class school {
    private: 
      string name; 
      int marks;
    
    public: 
      void getData(); 
      void displayData ();
  };

  void school::getData() {
    cout << "enter student name: " << endl;
    cin >> name;
    cout << "enter student mrks: " << endl;
    cin >> marks;
  };

  void school::displayData() {
    cout << "student name: " << name <<endl;
    cout << "student marks: " << marks <<endl;
  };

  int main () {
    school student1, student2;
    student1.getData();
    student2.getData();

    student1.displayData();
    student2.displayData();
  }
