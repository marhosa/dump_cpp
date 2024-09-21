#ifndef ECHIDNA_H
#define ECHIDNA_H


#include <iostream>
#include <string>
#include "echidna.h"
using namespace std;

struct Node {
    int data;
    Node* next;
};

class satella {
protected:
    Node *head;
public:
    satella() {
        head = NULL;
    }

    // Inserts an element at the beginning of the list
    void insertAtBeginning(int val);

    // Inserts an element at a specific position
    void insertAfter(int val, int pos);


    // Inserts an element at the end of the list
    void insert(int val);

    // Removes the element at a specified location from a non-empty list
    void removeAt(int pos);

    // Searches for an element in the list
    bool search(int val);

    // Returns the number of elements in the list
    int getSize();

    // Returns true if the list is empty, otherwise returns false
    bool isEmpty();

    // Returns true if the list is full, otherwise returns false
    bool isFull();

    // Displays the elements in the list
    void printList();

};




#endif