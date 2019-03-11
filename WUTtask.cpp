#include <iostream>
#include <string>

using namespace std;

class Cars {
  private:  
    struct Car {
      int *brand;
      int license_number;
      int owner_id;
      int price;
      Car * next;
    };

  public:
    void add_car(char*, int, int, int);
    void remove_brand(int);
    void print();
  };

  void Cars::add_car(char* brand, int number, int id, int price) {
    if (number == number && id == id) {
      cout << "New price: " << endl;
      cin >> price;

    } else {
      cout << "Car brand: " << endl;
      cin >> brand;
      cout << "Car license number: " << endl;
      cin >> number;
      cout << "Car owner id: " << endl;
      cin >> id;
      cout << "Car price: " << endl;
      cin >> price;

    };
  };

  void Cars::remove_brand(int owner_id);

  void Cars::print();

int main () {

  Cars C1, C2, C3;
  C1.add_car();
  C2.add_car();
  C3.add_car();

  C1.remove_brand();
  C2.remove_brand();
  C3.remove_brand();

  C1.print();
  C2.print();
  C3.print();
}

