class bst {
    private:
        struct node{
            int key;
            node* left;
            node* right;
        };

        node* root;
        void addLeafPrivate (int key, node* Ptr);
        void PrintInOrderPriate (node* Ptr)

    public:
        bst();
        node* createLeaf(int key);
        void addLeaf(int key);
        void PrintInOrder();

};