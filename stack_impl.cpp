#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n=100;
int top=-1;
void push(int val)
{
    if(top>=n-1)
    cout<<"stack overflow";
    else
    {
        top++;
        arr[top]=val;
        cout<<"value inserted"<<endl;
    }
}
void pop()
{
    if(top<=-1)
    cout<<"Stack underflow";
    else
    {
        cout<<"pop value in the stack:"<<arr[top]<<endl;
        top--;
    }
}
void display()
{
    if(top<=-1)
    cout<<"Stack underflow";
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
}