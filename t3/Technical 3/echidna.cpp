#include "echidna.h"

// Returns the number of elements in the list
int satella::getSize() {

    if(head == NULL){
        return 0;
    }

    Node* temp = head;
    int counter = 1;
    while (temp->next != NULL){
        counter++;
        temp = temp -> next;
    }
    return counter;
}

// Inserts an element at the beginning of the list
void satella::insertAtBeginning(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
    }

    Node* formerhead = head;



    return;
}

// Inserts an element at a specific position
void satella::insertAfter(int val, int pos) {

    if (pos < 1){
        return;
    }

    if(pos > getSize()){
        cout<<" Invalid Position, Ending Program...";
        return;
    }

    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL) {
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


// Inserts an element at the end of the list
void satella::insert(int val) {
    Node *qqq = new Node;
    qqq->data = val;
    qqq->next = NULL;

    if (head == NULL) {
        head = qqq;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = qqq;
    }
}


// Removes the element at a specified location from a non-empty list
void satella::removeAt(int pos) {

    if(pos > getSize()){
        cout<<" Invalid Position, Ending Program...";
        return;
    }


    if (head == NULL) return;
    Node *temp = head;
    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL){
        return;
    }

    Node *lods = temp->next;
    temp->next = lods->next;
    delete lods;

}


// Searches for an element in the list
bool satella::search(int val) {

    Node* temp = head;

    if(head == NULL){
        return false;
    }

        while(temp != NULL){
            if(temp->data == val){
                return true;
            }
            temp = temp->next;
        }

    return false;
}

// Returns true if the list is empty, otherwise returns false
bool satella::isEmpty() {
    if(head == NULL){
        return true;
    }
    return false;
}

// Returns true if the list is full, otherwise returns false
bool satella::isFull() {
    cout<<endl<<"Linked lists have no limit in size except when specified\n given code does not specify the limit. ";
    return false;
}

// Displays the elements in the list
void satella::printList() {
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}




