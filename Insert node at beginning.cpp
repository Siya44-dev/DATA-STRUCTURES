/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
};
struct list {
    struct node*start;
};
void addnode(list*l,int a)
{
     node*n;
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
    

    
void printlist(list* l) {
    struct node* t = l->start;
    while (t != NULL) {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
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
    printlist(l);
    
    return 0;
}