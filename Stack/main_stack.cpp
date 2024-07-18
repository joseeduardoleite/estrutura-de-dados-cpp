#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    stack firstStack;
    ItemType item;
    int option;
    cout << "Stack generator program\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            firstStack.push(item);
            break;
        case 2:
            firstStack.pop();
            cout << "Elemento removido: " << item << endl;
            break;
        case 3:
            firstStack.print();
            break;
        default:
            cout << "Opção errada, tente novamente!";
            break;
        }
    } while (option != 0);

    return 0;
}