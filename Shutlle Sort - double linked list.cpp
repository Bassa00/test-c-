#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct list{
list* prev;
int data;
list* next;
};

void shell_sort(int n, int a[]){
int gap, i, j, temp;
for(gap=n/2; gap>0; gap/=2){
for(i=gap;i<n;i+=1){
temp = a[i];
for(j = i; j >= gap && a[j-gap] > temp; j -= gap){
a[j] = a[j-gap];
a[j] = temp;
}
}
}
}

int main(){
list *h, *p, *q;
srand(time(0));
h = new list; //add values to linked list
h ->data=rand()%99+1;
h->prev=NULL;
h->next=NULL;
p=h;

for(int i=0; i<20; i++){
p->next = new list;
q=p;
p=p->next;
p->data=rand()%99+1;
p->prev=q;
}
p->next=NULL;

//output values of the list
p=h;
while(p != NULL){
cout << p->data <<" ";
q=p; p=p->next;
}
cout << endl;
//output data from the last node to the first node
cout << "Reverse order: " ;
while(q != NULL){
cout << q->data << " ";
q = q->prev;
}
}