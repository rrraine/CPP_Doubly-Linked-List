struct node {
    int elem;
    node* next;
    node* prev;

    node(int val) : elem(val), next(nullptr), prev(nullptr) {}
};