#ifndef _DoubleNode
#define _DoubleNode

/*
A DoubleNode should have a prev pointer and a next pointer and a value
The headptr's prev pointer is empty and the tailptr's next pointer is empty
*/

template<class ItemType>
class DoubleNode {
private:
    ItemType item;
    DoubleNode<ItemType>* prev;
    DoubleNode<ItemType>* next;
public:
    DoubleNode();
    DoubleNode(const ItemType& anItem);
    DoubleNode(const ItemType& anItem, Node<ItemType>* nextNodePtr);
    void setItem(const ItemType& anItem);
    void setNext(Node<ItemType>* nextNodePtr);
    ItemType getItem() const;
    Node<ItemType>* getNext() const;
};

#include "DoubleNode.cpp"
#endif 