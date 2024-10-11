#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* topNode;
    int maxSize;
    int currentSize;

public:
    Stack() : topNode(nullptr), maxSize(100), currentSize(0) {}

    Stack(int size): topNode(nullptr), maxSize(size), currentSize(0) {}

    void push(int value) {
        if (currentSize >= maxSize) {
            cout << "Error: Stack overflow. No se puede insertar el valor " << value << endl;
            return;
        }
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = topNode;
        topNode = newNode;
        currentSize++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: El Stack esta vacio." << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        currentSize--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Error: El Stack esta vacio." << endl;
            return -1;
        }
        return topNode->data;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    bool isFull() {
        return currentSize == maxSize;
    }
};

#endif