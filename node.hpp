struct node {
    int data;
    node* next;
    node* prev;

    node(int val) : data(val), next(nullptr), prev(nullptr) {}
};