
typedef int ItemType;
const int max_itens = 100;

class stack
{
    private:
        ItemType lenght;
        ItemType* structVet; 

    public:
        stack();
        ~stack();
        
        bool isFull();
        bool isEmpty();
        void push(ItemType item);
        ItemType pop();
        void topPrint();
        ItemType size();
};
