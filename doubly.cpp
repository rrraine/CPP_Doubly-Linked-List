#include <iostream>
#include "list.hpp"
#include "node.hpp"
using namespace std;

class Doubly : public List {

    private:
   
    int size;
    node* head;
    node* tail;

    // helper functions
    void addBetween(node* curr, node* node){
        return;
    }

    int removeBetween(node* curr){
        return 0;
    }

    node* traverseTail(int pos){
        return NULL;
    }

    node* traverseHead(int pos){
        return NULL;
    }
    public:

    void addHead(int num) {
        node* newNode = new node(num);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }

        newNode->next = head;
        newNode->prev = NULL;
        head->prev = newNode;
        head = newNode;
        size++;
        return;
    }

    void addTail(int num) {
        node* newNode = new node(num);
        if (tail == NULL){
           head = newNode;
           tail = newNode;
           size++;
           return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        size++;
        return;
    }

    void addAt(int num, int pos) {

    }

    int removeHead(){
        return 0;
    }

    int removeTail(){
        return 0;
    }   

    int removeAt(int pos){
        return 0;
    }  

    int removeAll(int num) {
        return 0;
    }  


    int get(int pos) {
        return 0;
    }  

    int retain(int num) {
        return 0;
    }  

    int corner(int left, int right) {
        return 0;
    }  

    void reverse(){
        return;
    }   

    void print(){
        return;
    }

};