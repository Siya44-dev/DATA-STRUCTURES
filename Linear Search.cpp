/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    
int a[20];
int n,x,i;
cout<<"Enter the size of array:";
cin>>n;
for(i=0;i<n;i++) {
    cout<<"Enter the value:";
    cin>>a[i];
}
cout<<"Enter the value to be searched:";
cin>>x;
for(i=0;i<a[i];i++) {
    
if (a[i]==x) {
    cout<<"Value found at index:" << i ;
}
}
return 0;
}
