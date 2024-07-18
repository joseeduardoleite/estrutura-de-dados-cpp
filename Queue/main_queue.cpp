#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    queue queue;
    int option;
    ItemType item;

    cout << "Programa gerador de filas:\n";

    do
    {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a fila!\n";

        cin >> option;

        switch (option)
        {
        case 1:
            queue.enqueue(item);
            cout << "Digite o elemento a ser inserido na fila:\n";
            cin >> item;
            break;
        case 2:
            item = queue.dequeue();
            cout << "Elemento removido: " << item << endl;
            break;
        case 3:
            queue.frontPrint();
        }
    } while (option != 0);
    
    return 0;
}