/*
 * Author : francis
 * Date: 2020/1/10
 * Description :header file for single link list.
 */

#ifndef SINGLE_LINK_NODE_H_INCLUDED
#define SINGLE_LINK_NODE_H_INCLUDED

namespace LinkList {
class SingleLinkNode {
public:
    SingleLinkNode() {}
    SingleLinkNode(const int d, SingleLinkNode* ptr = nullptr)
        : data(d)
        , next(ptr) {}
    ~SingleLinkNode();

private:
    int data = 0;
    SingleLinkNode* next = nullptr;
};
}
#endif

