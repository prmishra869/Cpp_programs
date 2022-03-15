#include<iostream>
using namespace std;
int Binary_Search(int arr[],int size,int Key)
{
    int start=0;
    int end=size-1;
    int mid= (start+end)/2;  //To avoid int overflow condition here(i.e. when start=end=INT_MAX) we can write mid= (start+end)/2 as start+((end-start)/2)
    while(start<=end)
    {
        if(arr[mid]==Key)
        return mid;
        else if(arr[mid]>Key)
        end=mid-1;
        else
        start=mid+1;
        mid= (start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
   cout<<"Enter the Size of Array=>";
    cin>>size;
   cout<<"Enter the Elements of Array"<<endl;
   for(int i=0;i<size;i++)
   {
        cin>>arr[i];
   }
    int Key;
    cout<<"Enter the Key to find=>";
    cin>>Key;
    int index=Binary_Search(arr,size,Key);
    if(index==-1)
    cout<<"Key not found";
    else
    cout<<"Key found at index=>"<<index;
}