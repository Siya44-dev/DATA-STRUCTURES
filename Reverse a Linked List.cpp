/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
struct node {
    int val;
    struct node*next;
    struct node*prev;
};
struct list {
    struct node*start;
};
void addnode(list*l,int a)
{
    struct node*n;
    n=new node();
    n->val=a;
    n->next=NULL;
    if(l->start==NULL)
    {
        l->start=n;
    }
    else{
        n->next=l->start;
        l->start=n;
    }
}
void printlist(list*l)
{
    struct node*temp=l->start;
    while(temp!=NULL)
    {
        cout<<temp->val <<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverselist(list*l) {
    struct node*prev=NULL;
    struct node*current=l->start;
    struct node*next=NULL;
    while(current!=NULL) {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    l->start=prev;
}


int main()
{
    list*l;
    l=new list();
    l->start=NULL;
    addnode(l,10);
    addnode(l,20);
    addnode(l,30);
    addnode(l,40);
    addnode(l,50);
    cout<<"original list: ";
    printlist(l);
    reverselist(l);
    cout<<"reversed list: ";
    printlist(l);
    
    return 0;
}