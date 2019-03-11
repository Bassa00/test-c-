#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Stack
{
    int Data;
    Stack *Next;
};

void Create(Stack *&S);
void Push(Stack *&S, int D);
void Pop(Stack *&S);
int Top(Stack *&S);
bool isEmpty(Stack *&S);

int main()
{
    Stack *A;
    srand(time(0));
    int Num;
    Create(A);
    for (int i = 1; i < 5; i++)
    {
        Num = i;
        cout << Num << " ";
        Push(A, Num);
    }

    cout << "\nStack values: \n";
    while (!isEmpty(A))
    {
        cout << Top(A) << " ";
        Pop(A);
    }

    cout << endl;
    system("pause");
    return 0;
}

void Create(Stack *&S)
{
    S = NULL;
}

void Push(Stack *&S, int D)
{
    Stack *p;
    p = new Stack; // 1.
    p->Data = D;
    p->Next = S; // 2.
    S = p;       // 3.
}

void Pop(Stack *&S)
{
    Stack *p;
    p = S;       // 1.
    S = S->Next; // 2.
    delete p;    // 3.
}
int Top(Stack *&S)
{
    return (S != NULL) ? S->Data : -1;
}

bool isEmpty(Stack *&S)
{
    return (S == NULL) ? true : false;
}
