#include <iostream>
#include <cstddef>
#include "dynamic_stack.h"

using namespace std;

dynamic_stack::dynamic_stack() {
    TopNode = NULL;
}

dynamic_stack::~dynamic_stack() {
    Node* TempNode;

    while (TopNode != NULL) {
        TempNode = TopNode;
        TopNode = TopNode->next;

        delete TempNode;
    }    
}

bool dynamic_stack::isEmpty() {
    return TopNode == NULL;
}

bool dynamic_stack::isFull() {
    Node* NewNode;
    try {
        NewNode = new Node;
        delete NewNode;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}

void dynamic_stack::push(ItemType item) {
    if (isFull()) {
        cout << "The stack is full!\n";
    } else {
        Node* NewNode = new Node;
        NewNode->value = item;
        NewNode->next = TopNode;
        TopNode = NewNode;
    }
}

ItemType dynamic_stack::pop(){
    if (isEmpty()) {
        cout << "The stack is empty!\n";
        return 0;
    } else {
        Node* TempNode;
        TempNode = TopNode;
        ItemType itemToRemove = TopNode->value;
        TopNode = TopNode->next;
        delete TempNode;

        return itemToRemove;
    }
}

void dynamic_stack::print() {
    Node* TempNode = TopNode;
    cout << "Pilha: [ ";
    while (TempNode != NULL) {
        cout << TempNode->value << " ";
        TempNode = TempNode->next;
    }
    cout << " ]\n";
}