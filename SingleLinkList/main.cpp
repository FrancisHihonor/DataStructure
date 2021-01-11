/*
 * Main cpp
 *
 * */

#include <iostream>
#include "SingleLinkList.h"

using namespace std;
using namespace LinkList;

int main(void)
{
    SingleLinkList* sllst = new SingleLinkList();
    if (sllst == nullptr) {
	cout << "single link list create failed, return." << endl;
        return -1;
    }
    if (sllst->IsEmpty()) {
        cout << "the single list is empty. return." << endl;
	return -1;
    }
    return 0;
}
