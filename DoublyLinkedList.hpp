#ifndef _DoublyLinkedList
#define _DoublyLinkedList

#include "DoubleNode.hpp"

template<typename ItemType>
class DoublyLinkedList
{
private:
    DoubleNode<ItemType>* headPtr;
    int itemCount;
public:
    DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList<ItemType>& dList);
    virtual ~DoublyLinkedList();
    bool insert(const ItemType& item, const int& position);
    bool remove(const int& position);
    int getSize() const;
    DoubleNode<ItemType> *getHeadPtr();
    DoubleNode<ItemType> *getAtPos(const int& pos) const;
    bool isEmpty() const;
    void clear();
    void display() const;
    void displayBackwards() const;
    DoublyLinkedList<ItemType> interleave(const DoublyLinkedList<ItemType>& a list);
};

#endif