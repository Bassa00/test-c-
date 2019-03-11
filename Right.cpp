#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Tree
{
    int Data;
    Tree *Left;
    Tree *Right;
    int Weight;
};

void Add(Tree *&Node, int Value);
void InOrder(Tree *&Node);
void PreOrder(Tree *&Node);
void PostOrder(Tree *&Node);

int Max(int A, int B);
int Height(Tree *&Node);
int Weight(Tree *&Node);
void WeightForAll(Tree *&Node);
void LeftTurn(Tree *&Node);
void LeftTurn2(Tree *&Node);

int main()
{
    Tree *Root = NULL;
    int Number;
    srand(time(0));

    cout << "Input data: ";
    for (int i = 0; i < 10; i++)
    {
        Number = rand() % 99 + 1;
        cout << Number << " ";
        Add(Root, Number);
    }

    cout << "\nIn-order: ";
    InOrder(Root);
    cout << "\nPost-order: ";
    PostOrder(Root);
    cout << "\nPre-order: ";
    PreOrder(Root);

    return 0;
} // int main()

void Add(Tree *&Node, int Value)
{
    if (Node == NULL)
    {
        Node = new Tree;
        Node->Data = Value;
        Node->Left = NULL;
        Node->Right = NULL;
    } // if (Node == NULL)
    else
    {
        Tree *p = new Tree;
        p->Data = Value;
        p->Left = NULL;
        p->Right = NULL;
        if (Value > Node->Data)
        {
            if (Node->Right == NULL)
                Node->Right = p;
            else
                Add(Node->Right, Value);
        } // if (Value > Node->Data)
        else
        {
            if (Node->Left == NULL)
                Node->Left = p;
            else
                Add(Node->Left, Value);
        }
    }
}

void InOrder(Tree *&Node)
{
    if (Node != NULL)
    {
        InOrder(Node->Left);
        cout << Node->Data << " ";
        InOrder(Node->Right);
    }
}

void PreOrder(Tree *&Node)
{
    if (Node != NULL)
    {
        cout << Node->Data << " ";
        PreOrder(Node->Left);
        PreOrder(Node->Right);
    }
}
void PostOrder(Tree *&Node)
{
    if (Node != NULL)
    {
        PostOrder(Node->Left);
        PostOrder(Node->Right);
        cout << Node->Data << " ";
    }
}

int Max(int A, int B)
{
    return (A > B) ? A : B;
}

int Height(Tree *&Node)
{
    if (Node == NULL)
    {
        return 0;
    }
    else
    {
        return Max(
                   Height(Node->Left),
                   Height(Node->Right)) +
               1;
    }
}

int Weight(Tree *&Node)
{
    return Height(Node->Left) - Height(Node->Right);
}

void WeightForAll(Tree *&Node)
{ // Determine weight for each node by pre-order
    if (Node != NULL)
    {
        Weight(Node);
        WeightForAll(Node->Left);
        WeightForAll(Node->Right);
    }
}

void RightTurn(Tree *&Node)
{
    Tree *p = Node;
    Node = Node->Left;
    p->Left = Node->Right;
    Node->Right = p;
}
