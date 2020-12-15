#include <iostream>
using namespace std;

struct Node
{
    int key;
      Node *next;
    Node(int x)
    {
        key=x;
        next=NULL;
    }
};
Node *insertbegin(Node *head,int key)
{
    Node *temp=new Node(key);
    temp->next=head;
    return temp;
}

void printList(Node *head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->key)<<" ";
        curr=curr->next;
    }
}
int main()
{
  Node *head=NULL;
  head=insertbegin(head,20);
  head=insertbegin(head,5);
  head=insertbegin(head,10);
  printList(head);
  return 0;
}
