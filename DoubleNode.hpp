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
    DoubleNode(const ItemType& anItem, DoubleNode<ItemType>* nextNodePtr, DoubleNode<ItemType>* prevNodePtr);
    void setItem(const ItemType& anItem);
    void setNext(DoubleNode<ItemType>* nextNodePtr);
    void setPrev(DoubleNode<ItemType>* prevNodePtr);
    ItemType getItem() const;
    DoubleNode<ItemType>* getNext() const;
    DoubleNode<ItemType>* getPrev() const;
};

#include "DoubleNode.cpp"
#endif 