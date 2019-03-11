#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

void create(stack *&s)
{ //function
    s = NULL;
}
void push(stack *&s, char var)
{ //push: put sth. inside xxx
    if (s == NULL)
    {
        s = new stack; //create new stack
        s->data = var; //char var
        s->next = NULL;
    }
    else
    {
        stack *p;      //create new pointer p
        p = new stack; //make a temp. stack
        p->data = var; //char var
        p->next = s;   //add the original stack to the end of temp. stack;
        s = p;         //replace the original stack with the temp. stacak;
    }
}
char top(stack *&s)
{
    return (s == NULL) ? ',' : s->data; // if...else...
}

void pop(stack *&s)
{
    if (s != NULL)
    {
        stack *p; //create new pointer
        p = s;
        s = s->next;
        delete p;
    }
}

bool isEmpty(stack *&s)
{
    return (s == NULL) ? true : false; //if s==NULL,then true;else false.
}

int size(stack *&s)
{
    int count = 0;
    stack *a; //create new pointer a;
    a = NULL;
    while (!isEmpty(s))
    {
        push(a, top(s));
        pop(s);
        count++; //cal. how many elements
    }            //then is empty
    s = NULL;
    while (!isEmpty(a))
    {
        push(s, top(a));
        pop(a);
    }
    return count; //count is over
}

//////////////////////////
int charCount(stack *&s, char sym)
{
    int count = 0;
    stack *a; //create new pointer a;
    a = NULL;
    while (!isEmpty(s))
    {
        //cout << "char :"<<top(s) <<"\n";
        if (sym == top(s))
        {
            count++; //cal. how many elements
        }
        push(a, top(s));
        pop(s);
    }
    s = NULL;
    while (!isEmpty(a))
    {
        push(s, top(a));
        pop(a);
    }
    return count; //count is over
}

int main()
{
    stack *A;
    create(A); //create stack A
    cout << "Input your string: ";
    string mystr;
    cin >> mystr;

    for (int i = 0; i < mystr.length(); i++)
    {
        push(A, mystr[i]);
    }
    int BCount = charCount(A, 'B');
    int ACount = charCount(A, 'A'); //
    if (BCount == ACount)
    {
        cout << "Have the same number of A and B." << endl;
    }
    else
    {
        cout << "Have not the same number of A and B." << endl;
    }
}