#include <iostream>
#include "Person.h"

using namespace std;

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

template<class DT>
class Node {
public:
	DT data;
	Node* next;
	Node();

};

template<class DT>
class LinkedQueue {
private:
	Node<DT>* front;
	Node<DT>* rear;
	int count;

public:
	LinkedQueue();
	void enqueue(DT);
	void dequeue();
	DT queueFront();
	DT queueRear();
	bool isEmpty();
	int getCount();

};
#endif

template <class DT>
Node<DT>::Node() {
	data = DT();
	next = nullptr;
}

template<class DT>
LinkedQueue<DT>::LinkedQueue() {
	front = rear = NULL;
	count = 0;
}

template<class DT>
void LinkedQueue<DT>::enqueue(DT value) {
	Node<DT>* pNew = new Node<DT>;
	pNew->data = value;
	pNew->next = nullptr;

	if (!isEmpty()) {
		rear->next = pNew;
	}
	else
		front = pNew;
	rear = pNew;
	count++;
}

template<class DT>
void LinkedQueue<DT>::dequeue() {
	Node<DT>* pTemp = front;
	front = front->next;
	delete pTemp;
	count--;
}

template<class DT>
DT LinkedQueue<DT>::queueFront() {
	return front->data;
}

template<class DT>
DT LinkedQueue<DT>::queueRear() {
	return rear->data;
}

template<class DT>
bool LinkedQueue<DT>::isEmpty() {
	if (count == 0)
		return true;
	else
		return false;
}

template<class DT>
int LinkedQueue<DT>::getCount() {
	return count;
}

