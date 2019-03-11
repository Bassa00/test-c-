#include <iostream>
#include <string>

using namespace std;

int main(){
    string msg;
    int func(msg)
    {
        int num = 0;
        do
        {
            cout << msg << endl;
            cin >> num;

        } while (num <= 0);

        return num;
    }
}
