#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct stack
{

    int data;
    stack next;
};
void Create(stack *&S1);
void Create(stack *&S2);
void Create(stack *&S3);

void Push(stack *&S1, int d1);
void Push(stack *&S2, int d2);
void Push(stack *&S3, int d3);

void Pop(stack *&S1);
void Pop(stack *&S2);
void Pop(stack *&S3);

int Top(stack *&S1);
int Top(stack *&S2);
int Top(stack *&S3);

int main()
{
    stack *A;
    stack *B;
    stack *C;
    int num1, num2, num3;
srand(time(0);

cout << "input values:";

Create(A); Create(B); Create(C);
for (i=0; i<15;i++){
        num1 = rand() % 99 + 1;
        Push(A, num1);
}
for (i2=0; i2<15;i2++){
        num2 = rand() % 99 + 1;
        Push(B, num2);
}
for (i3=0; i3<15;i3++){
        num3 = NULL;
        Push(C, num3);
}
cout << "Data from the stack:";

while (!isEmpty(A){
        num1 = Top(A);
        cout << num1 << " ";
        Pop(A);
}
while (! isEmpty(B){
        num1 = Top(B);
        cout << num2 << " ";
        Pop(B);
}
while (!isEmpty(C){
        num1 = Top(C);
        cout << num3 << " ";
        Pop(C);
}
cout << stack
system("pause");
return 0;
}

void Push(stack *&C, stack *A);
void Push(stack *&C, stack *B);
void print_stack(stack<char> C)
{
    while (!C.isEmpty() {
        std::cout << C.Top();
        C.Pop();

    });
}
