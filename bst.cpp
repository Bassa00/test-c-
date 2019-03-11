#include <iostream>
#include <cstdlib>

#include "bst.h"

using namespace std;

bst::bst() {
    root = NULL;
}
bst::node* bst::createLeaf(int key) {
    node* n = new node;
    n->key = key;
    n->left = NULL;
    n-> right = NULL;

    return n;
}

void bst::addLeaf(int key) {
    addLeafPrivate (key, root);
}
void bst::addLeafPrivate (int key, node* Ptr){
    if (root == NULL) {
        root = createLeaf(key);
    }
    else if (key < Ptr-> key) {
        if (Ptr->left != NULL) {
            addLeafPrivate(key, Ptr->left);
        }
        else{
            Ptr->left = createLeaf (key);
        }
    }
       else if (key >Ptr-> key) {
        if (Ptr->right != NULL) {
            addLeafPrivate(key, Ptr->right);
        }
        else{
            Ptr->right = createLeaf (key);
        }
    }
    else {
        cout << "the key " << key << "has already been added to the tree \n";
    }
}

void bst::PrintInOrder() {
    PrintInOrder
}