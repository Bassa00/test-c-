#include <iostream>

using namespace std;

class Node{
    public:
        Node *nextNode = NULL;

        int data;
};

class Link{
    public:
        Node *head = new Node();

         void insert(int data);
         int getData(int nodeIndex);
         void deleteData(int nodeIndex);

         const void printData();
         
         int cntSize = 0;
};

void Link::insert(int data){

    if (cntSize == 0){
        head->data = data;
        head->nextNode =NULL;
    }

    else{
        Node *currentNode = new Node();

        currentNode->data = data;
        currentNode->nextNode = NULL;

        Node *tempNode = head;

        while (tempNode->nextNode !=NULL)
            tempNode = tempNode->nextNode;


        tempNode->nextNode = currentNode;

    }
    ++cntSize;
}


void Link::deleteData(int nodeIndex){
    
    Node *tempNode = head;
    Node *deleteNode;
    Node *swapNode;

    if (nodeIndex != 0){
        for (int i = 0; i < nodeIndex - 1; ++i){
            tempNode = tempNode->nextNode;
        }

        deleteNode = tempNode->nextNode;
        swapNode = deleteNode->nextNode;

        tempNode->nextNode = swapNode;
    }
    else{
        head = tempNode->nextNode;
        deleteNode = tempNode;
    }


    delete deleteNode;
    cntSize -=1;
}

int main(){
    Link link;

    int randomValue = 0;
    
    Node *tempNode = link.head;

    for (int i = 0; i < 30; ++i){
        if (randomValue = (rand() % 98) + 1){
            link.insert(randomValue);
        }
    }
  
    //print data
    for (int i = 0; i< link.cntSize; ++i){
        cout << tempNode->data << " ";
        
        tempNode = tempNode->nextNode;
    }
    tempNode = link.head;
    cout << endl;

    for (int i = 0; i < link.cntSize; ++i){
        if (tempNode->data % 2 == 1)
            cout << tempNode->data << " ";
        
        tempNode = tempNode->nextNode;

    }

    tempNode = link.head;
    cout << endl;
    
    for (int i = 0; i < link.cntSize; ++i){
        if (tempNode->data < 20 || tempNode->data > 80)
            cout << tempNode->data << " ";
        
        tempNode = tempNode->nextNode;
    }


}