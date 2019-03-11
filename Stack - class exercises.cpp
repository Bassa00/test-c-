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
int Size(Stack *&S);
void Print(Stack *&S);
void Reverse(Stack *&S);
int Nth(Stack *&S, int N);

int main()
{
    Stack *A;
    int Number;
    srand(time(0));
    cout << "Initial input values: ";
    Create(A);
    for (int i = 0; i < 20; i++)
    {
        Number = rand() % 99 + 1;
        cout << Number << " ";
        Push(A, Number);
    }

    int N = rand() % 20 + 1;
    Number = Size(A);
    cout << "\nStack has " << Number << " nodes\n";
    cout << "\nData from the stack: ";
    Print(A);
    cout << "\nReverse data from the stack: ";
    Reverse(A);
    cout << endl
         << N << "th node has value of: " << Nth(A, N);
    cout << endl;
    system("pause");
    return 0;
}

void Create(Stack *&S) { S = NULL; }
void Push(Stack *&S, int D)
{
    if (S == NULL)
    {
        S = new Stack;
        S->Data = D;
        S->Next = NULL;
    }
    else
    {
        Stack *p;
        p = new Stack;
        p->Data = D;
        p->Next = S;
        S = p;
    }
}

void Pop(Stack *&S)
{
    if (S != NULL)
    {
        Stack *p;
        p = S;
        S = S->Next;
        delete p;
    }
}

int Top(Stack *&S) { return (S == NULL) ? -1 : S->Data; }
bool isEmpty(Stack *&S) { return (S == NULL) ? true : false; }
int Size(Stack *&S)
{
    int Count = 0;
    Stack *L;
    L = NULL;
    while (!isEmpty(S))
    {
        Push(L, Top(S));
        Pop(S);
        Count++;
    }
    S = NULL;
    while (!isEmpty(L))
    {
        Push(S, Top(L));
        Pop(L);
    }
    return Count;
}
void Print(Stack *&S)
{
    Stack *L;
    L = NULL;
    while (!isEmpty(S))
    {
        cout << Top(S) << " ";
        Push(L, Top(S));
        Pop(S);
    }
    S = NULL;
    while (!isEmpty(L))
    {
        Push(S, Top(L));
        Pop(L);
    }
}
void Reverse(Stack *&S)
{
    Stack *L;
    L = NULL;
    while (!isEmpty(S))
    {
        Push(L, Top(S));
        Pop(S);
    }
    S = NULL;
    while (!isEmpty(L))
    {
        cout << Top(L) << " ";
        Push(S, Top(L));
        Pop(L);
    }
}
int Nth(Stack *&S, int N)
{
    int Count = 0;
    Stack *L;
    L = NULL;
    while ((Count < N) && (!isEmpty(S)))
    {
        Push(L, Top(S));
        Pop(S);
        Count++;
    }
    Count = Top(S);
    while (!isEmpty(L))
    {
        Push(S, Top(L));
        Pop(L);
    }
    return Count;
}