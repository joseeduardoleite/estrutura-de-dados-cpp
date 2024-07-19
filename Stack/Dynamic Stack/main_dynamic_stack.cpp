#include <iostream>
#include "dynamic_stack.h"

using namespace std;

int main(){
    dynamic_stack firstStack;
    ItemType item;
    int option;

    cout << "Programa gerador de pilha:\n";
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
            item = firstStack.pop();
            cout << "Elemento Removido: " << item << endl;
        case 3:
            firstStack.print();
        default:
            break;
        }
    } while(option != 0);

    return 0;
}