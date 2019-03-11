#include <iostream>

using namespace std;

int main()
{

    int x = 25;
    int *p = &x;
    cout << "x location : " << p << endl;
    cout << "p value : " << *p << endl;

    x = x + 5;
    cout << "x = " << x << endl;

    x = *p + 5;
    cout << "x  = " << *p << endl;

    *p = *p + 5;
    cout << "*p  = " << *p << endl;
    cout << "&*p  = " << &*p << endl;
}
