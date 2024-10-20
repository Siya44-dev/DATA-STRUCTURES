/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int binarysearch(int array[],int x,int l,int r) {
while(l<=r) {
int mid=l+r/2;
if (array[mid]==x) 
return mid;
if (array[mid]<x) 
l=mid+1;
else 
r=mid-1;
}
return -1;
}
int main (void) 
{
    int array[] = {2, 3, 4,6,15, 10, 40};
    int x=6;
    int n=7;
    int result = binarysearch(array,x,0,6);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index "<< result;
    return 0;
}
