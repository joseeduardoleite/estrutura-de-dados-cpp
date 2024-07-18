#include <iostream>
#include "queue.h"

using namespace std;

    queue::queue() {
        first = 0;
        last = 0;
        structure = new ItemType[max_items];
    }

    queue::~queue() {
        delete [] structure;
    }

    bool queue::isEmpty() {
        return first == last;
    }

    bool queue::isFull() {
        return last - first == max_items;
    }

    void queue::enqueue(ItemType item) {
        if (isFull()) {
            cout << "The queue is full!\n";
        } else {
            structure[last % max_items] = item;
            last++;
        }        
    }

    ItemType queue::dequeue() {
        if (isEmpty()) {
            cout << "The queue is empty!\n";
            return 0;
        } else {
            first++;
            return structure[(first-1) % max_items];
        }
    }

    void queue::frontPrint() {
        cout << "Queue: [ ";
        for (int i = first; i < last; i++) {
            cout << structure[i % max_items] << " ";
        }
        cout << "]\n";        
    }