#include <iostream>
#include "list.hpp"

void List::insertNode(int data) {
  Node* aux = new Node;
  aux->data = data;
  aux->next = nullptr;
  if (head == nullptr) {
    head = aux;
    tail = aux;
  } else {
    tail->next = aux;
    tail = aux;
  }
}

void List::display() {
  Node *aux = head;
  while (aux != nullptr) {
    cout << aux->data << " ";
    aux = aux->next;
  }
  cout << endl;
}

// Você deverá implementar apenas esse método
void List::inverte(){
    
    if(head != nullptr)
    {
        if(head->next != nullptr)
        {
            Node *inicio = head;
            Node *anterior = inicio;
            Node *incrementador = head->next;
            Node *alterador = inicio;
            alterador->next = nullptr;
            tail = alterador;
            while(true)
            {
                if(incrementador->next == nullptr)
                {
                  head = incrementador;
                  incrementador->next = anterior;
                  break;
                }
                else
                {
                    alterador = incrementador;
                    incrementador = incrementador->next;
                    alterador->next = anterior;
                    anterior = alterador;
                }
            }
        }
    }
}