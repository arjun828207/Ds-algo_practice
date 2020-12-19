#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* &head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return true;
        temp=temp->next;
    }
    return false;
}
void deletion(node* &head,int val)
{
    if(head== NULL)
    return;
    if(head->next==NULL)//if only one element is present
    return;
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data << "->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertathead(head,4);
    deletion(head,3);
    display(head);
    cout<<search(head,5)<<"  ";
}