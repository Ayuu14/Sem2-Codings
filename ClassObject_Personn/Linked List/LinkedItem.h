#ifndef LINKENDITEM_H 
#define LINKEDITEM_H 
#include<iostream> 
using namespace std;
class Node {
public:
    double data;
    Node* next;
};
class LinkedItem {
private:
    Node* pHead;
    Node* pTail;
    Node* pCurrent;
    Node* pTraverse;
    Node* pTemp;
    int noOfItem;
public:
    LinkedItem();
    int getNoOfItem();
    void insertItem(double);
    void insertItem(double, int);
    void deleteItem();
    void deleteItem(int);
    void retrieveItem();
    bool isEmpty();
};
#endif 
LinkedItem::LinkedItem() {
    noOfItem = 0;
    pHead = pTail = pTemp = pCurrent = 0;
}
int LinkedItem::getNoOfItem() {
    return noOfItem;
}
void LinkedItem::insertItem(double item) {
    Node* pNew = new Node;
    pNew->data = item;
    pNew->next = pHead;
    pHead = pNew;
    if (isEmpty())
        pTail = pNew;
    noOfItem++;
}
void LinkedItem::insertItem(double item, int position) {
    int count = 1;
    pCurrent = pHead;
    Node* pNew = new Node;
    pNew->data = item;

    while (pCurrent->next != 0 && count != position - 1) {
        count++;
        pCurrent = pCurrent->next;
    }

    pNew->next = pCurrent->next;
    pCurrent->next = pNew;
    pCurrent = pNew;
    if (pCurrent->next == 0)
        pTail = pCurrent;
    noOfItem++;

}

void LinkedItem::deleteItem() {
    pTemp = pHead;
    pHead = pTemp->next;
    delete pTemp;
    noOfItem--;
}

void LinkedItem::deleteItem(int position) {
    int count = 1;
    pTemp = pHead;

    while (pTemp->next != 0 && count != position) {
        count++;
        pCurrent = pTemp;
        pTemp = pTemp->next;
    }

    pCurrent->next = pTemp->next;
    delete pTemp;
    noOfItem--;
}

void LinkedItem::retrieveItem() {
    pTraverse = pHead;

    while (pTraverse != 0) {
        cout << pTraverse->data << " ";
        pTraverse = pTraverse->next;
    }
}

bool LinkedItem::isEmpty() {
    return (noOfItem == 0);
}




