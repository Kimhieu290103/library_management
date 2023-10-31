#pragma once
#include <iostream>
using namespace std;
template <class T>
class Queue{
    private:
        struct Node
        {
            T data;
            Node *next;
            Node(T data){
                this->data = data;
                this->next = NULL;
            }
        };
        Node *Front;
        Node *Rear;
    public:
        Queue();
        ~Queue();
        Node *contructorNode(T data)
        {
            Node *node = new Node(data);
            return node;
        }
        void Enqueue(T);
        T &operator[](int index);
        void Dequeue();
        void Show();
};
