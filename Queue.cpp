#include "Queue.h"
template <class T>
Queue<T>::Queue()
{
    this->Front = this->Rear = NULL;
}
template <class T>
Queue<T>::~Queue(){}
template <class T>
void Queue<T>::Enqueue(T data){
    Node *node = contructorNode(data);
    if(this->Front == NULL) Front = node;
    else this->Rear->next = node;
    this->Rear =  node;
}
template <class T>
void Queue<T>::Dequeue(){
    if(this->Front == NULL) return;
    else{
        Node *node = this->Front;
        Front = this->Front->next;
        if(this->Front == NULL) this->Rear = NULL;
        delete node;
    }
}
template <class T>
void Queue<T>::Show(){
    Node *p;
    p = this->Front;
    while (p!=NULL){
        cout << p->data;
        p = p->next;
    }
}
template <class T>
T& Queue<T>::operator[](int index)
{
    Node *node = this->Front;
    for (int i = 0; i < index; i++)
    {
        node = node->next;
    }
    return node->data;
}
