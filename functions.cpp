#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 22.0/7.0;

int getPosInt (string msg) {
    int num = 0;
    do {
        cout << msg << endl;
        cin >> num;
    }
    while (num <= 0);
    
    return num;
}

double areaOfCircle (int r) {
    return PI * pow(r,2);
}

double volOfSphere (int r) {
    return 4/3.0 * PI * pow(r,3);
}

int main () {
    int radius = getPosInt ("Enter a +number for the radius of circle/sphere");

    double aCircle = areaOfCircle(radius);

    double vSphere = volOfSphere(radius);

    cout << "The area of a circle has radius of " << radius << " is " << aCircle << "." << endl;

    cout << "The volume of a sphere has radius of " << radius << " is " << vSphere << "." << endl;
}

