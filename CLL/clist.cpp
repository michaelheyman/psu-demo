#include "clist.h"

void list::addBefore2Helper()
{
  cout << "\nNUMBER: " << addBefore2(rear->next, 69);
}

int list::addBefore2(node*& curNode, int toAdd)
{
  if(curNode->next->data == 2)
    {
      node* newNode = new node();
      newNode->data = toAdd;
      newNode->next = curNode->next;
      curNode->next = newNode;

      return addBefore2(curNode->next->next, toAdd) + 1;
    }

  if(curNode == rear)
    {
      return 0;
    }
  return addBefore2(curNode->next, toAdd);
}
