typedef int ItemType;

struct Node {
    ItemType value;
    Node* next;
};

class dynamic_stack {
    private:
        Node* TopNode;
        bool isEmpty();
        bool isFull();

    public:
        dynamic_stack();
        ~dynamic_stack();
        void push(ItemType item);
        ItemType pop();
        void print();
};