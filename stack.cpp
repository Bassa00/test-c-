#include <iostream>
#include <stack>

using namespace std;

int main () {
    stack<int> myStack;

    myStack.push(5);
    myStack.push(3);
    myStack.push(2);

    cout << "Number of ints in stack: " << myStack.size() << endl;

    while(!myStack.empty()){
        cout << "popping " << myStack.top() << endl; // view top value 
        myStack.pop();
    }
    cout << "Number of ints in stack: " << myStack.size() << endl;
    
}