
#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    //(Base case
    if(size==0||size==1)
    return true;
    if(arr[0]>arr[1])
    return false;

    //Recurrance relation

    bool ans = isSorted(arr+1,size-1);
    return ans;
}

int main()
{
    int arr[6]={2,3,4,10,10,15};

    bool ans=isSorted(arr,7);
   if(ans)
   cout<<"Array is Sorted";
   else
   cout<<"Array is not sorted";
    return 0;
}

