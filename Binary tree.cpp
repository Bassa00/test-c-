#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Tree
{
    int data;
    Tree *left;
    Tree *right;
};
void hello(Tree *&s);
void Add(Tree *&s, int d);
void Search(Tree *s, int d, int value);

//void InOrder(Tree* & Node);
//void PreOrder(Tree* & Node);
//void PostOrder(Tree* & Node);

int main()
{
    Tree *right;
    int num;
    int value = 0;
    srand(time(0));
    //a) creates binary search tree with 30 nodes;
    cout << "30 nodes: ";
    hello(right);
    for (int i = 0; i < 30; i++)
    {
        num = rand() % 99 + 1;
        Add(right, num, value);
        cout << num << endl;
    }
    //b) ask the user input some number and
    //find the node containing the specified number
    cout << "Input a number:" << endl;
    int n2;
    cin >> n2; //number
    cout << endl;
    system("pause");

    return 0;
}

void hello(Tree *&s)
{
    s = NULL;
}

void Add(Tree *&s, int value)
{
    if (s == NULL)
    {
        s = new Tree;
        s->data = value;
        s->left = NULL;
        s->right = NULL;
    }
    else
    {
        Tree *p;
        bool YN = true;
        p = s;

        while (YN)
        {
            if (d <= p->data)
            {
                if (p->left == NULL)
                {
                    p->left = new Tree;
                    YN = false;
                }
                p = p->left;
            }
            else
            {
                if (p->right == NULL)
                {
                    p->right = new Tree;
                    YN = false;
                }
                p = p->right;
            }
        }
        p->data = d;
        p->left = NULL;
        p->right = NULL;
    }
}

//c) calculates number of steps done during the search;
Search(Tree *s, int d, int value)
{
    if (d == s->data)
    {
        cout << " " << value << "steps done during the search. ";
    }
    else if (d < s->data && s->left != NULL)
    {
        value++;
        return Search(s->left, d, value);
    }
    else if (d > s->data && s->right != NULL)
    {
        value++;
        return Search(s->right, d, value);
    }
    else
    {
        cout << value << "Steps.";
    }
}