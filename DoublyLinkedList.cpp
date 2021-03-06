#include "DoublyLinkedList.hpp"

template <typename ItemType>
DoublyLinkedList<ItemType>::DoublyLinkedList() : headPtr(nullptr), tailPtr(nullptr), itemCount(0) {}

template <typename ItemType>
DoublyLinkedList<ItemType>::DoublyLinkedList(const DoublyLinkedList<ItemType> &dList)
{
    /* Copy constructor:
        Copy headPtr, tailPtr, itemCount
    */
    if (dList.headPtr == nullptr)
    {
        headPtr = nullptr;
        tailPtr = nullptr;
        itemCount = 0;
    }
    else
    {
        //create headPtr
        headPtr = new DoubleNode<ItemType>();
        headPtr.setItem(dList.headPtr.getItem(), nullptr, nullptr);

        //traverse through the rest of the list
        DoubleNode<ItemType> *origChainPtr = dList.headPtr;
        DoubleNode<ItemType> *travPtr = dList.headPtr;
        while (origChainPtr->getNext())
        {
            origChainPtr = origChainPtr->getNext();
            DoubleNode<itemType> newNode = new DoubleNode<ItemType>;
            newNode->setItem(origChainPtr->getItem());
            newNode->setPrev(travPtr);
            travPtr->setNext(newNode);
            travPtr = travPtr->getNext();
        }

        //last node
        DoubleNode<itemType> newNode = new DoubleNode<ItemType>;
        newNode->setItem(origChainPtr->getItem());
        travPtr->setItem(newNode);
        newNode->setPrev(travPtr);
        newNode->setNext(nullptr);
    }
}

virtual ~DoublyLinkedList();
bool insert(const ItemType &item, const int &position);
bool remove(const int &position);
int getSize() const;
DoubleNode<ItemType> *getHeadPtr();
DoubleNode<ItemType> *getAtPos(const int &pos) const;
bool isEmpty() const;
void clear();
void display() const;
void displayBackwards() const;
DoublyLinkedList<ItemType> interleave(const DoublyLinkedList<ItemType> &a list);