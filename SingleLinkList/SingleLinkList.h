/*
 * Author : francis
 * Date: 2020/1/10
 * Description :header file for single link list.
 */

#ifndef SINGLE_LINK_LIST_H_INCLUDED
#define SINGLE_LINK_LIST_H_INCLUDED

#include "SingleLinkNode.h"

namespace LinkList {
class SingleLinkList {
public:
    SingleLinkList()
       : head(nullptr)
       , tail(nullptr) {}
    ~SingleLinkList();

public:
    bool IsEmpty()
    {
       return (head == nullptr);
    }
    void AddToHead(int);
    void AddToTail(int);
    int DeleteFromHead(); // delete the head and return the value;
    int DeleteFromTail(); // delete the tail and return the value;
    void DeleteNode(int);
    bool IsInList(int) const;

private:
    SingleLinkNode *head, *tail;
};
}
#endif

