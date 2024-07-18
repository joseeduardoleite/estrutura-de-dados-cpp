typedef int ItemType;
const int max_items = 10;

class queue {
    private:
        int first, last;
        ItemType* structure;
        bool isEmpty();
        bool isFull();

    public:
        queue();
        ~queue();
        void frontPrint();
        void enqueue(ItemType item);
        ItemType dequeue();
};