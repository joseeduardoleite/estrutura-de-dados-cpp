#include <iostream>
#include "stack.h"

using namespace std;

    stack::stack() {
        lenght = 0;
        structVet = new ItemType[max_itens];
    }

    stack::~stack() {
        delete [] structVet;
    }

    bool stack::isFull() {
        return lenght == max_itens;
    }

    bool stack::isEmpty() {
        return lenght == 0;
    }

    void stack::push(ItemType item) {
        if (isFull()) {
            cout << "The stack is full!\n";
        } else {
            structVet[lenght] = item;
            lenght++;
        }
    }

    ItemType stack::pop() {
        if (isEmpty()) {
            cout << "The stack is empty!\n";
            return 0;
        } else {
            lenght--;
            return structVet[lenght--];
        }
    }

    void stack::topPrint() {
        if (isEmpty()) {
            cout << "The stack is empty!\n";
        } else {
            cout << "Pilha: [ ";
            for (int i = 0; i < lenght; i++) {
                cout << structVet[i] << " ";
            }
            cout << "]\n";            
        }
    }

    ItemType stack::size() {
        return lenght;
    }