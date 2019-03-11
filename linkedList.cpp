#include <iostream>

using namesapcae std;

struct node {
  int data;
  node *next;
};

void main () {
  
}

node *n;
node *t;
node *h;

n = new node;
n -> data = 1;
t = n;
h = n;

n = new node;
n -> data = 2;
t -> next = n;
t = t -> next;

n = new node;
n -> data = 3;
t -> next = n;
t = t -> next;

n = new node;
n -> data = 4;
t -> next = n;
t = t -> next;
n -> next = null;
