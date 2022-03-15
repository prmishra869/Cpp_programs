#include<iostream>
using namespace std;
bool Binary_Search(int arr[],int s,int e,int key)
{
    //Base case of Not found
    if(s>e)
    return 0;
    int mid=s+ ((e-s)/2);
    
    //Base case for found
    if(arr[mid]==key)
    return 1;
    if(key>arr[mid])
    return Binary_Search(arr,mid+1,e,key);
    if(key<arr[mid])
    return Binary_Search(arr,s,mid-1,key);
}
int main()
{
    int arr[10]={-2,4,23,32,34,100,322,450,900,1000};
    int s=0;
    int e=9;
    int key;
    cout<<"Enter the element to be searched=>";
    cin>>key;
    bool k=Binary_Search(arr,s,e,key);
    
    if(k)
    cout<<"Element found";
    else
    cout<<"Element not found ";
    return 0;
}