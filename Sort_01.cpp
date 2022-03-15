//In this problem we will be given an array having 1 and 0 as Input we want to sort the array i.e. all 0 
// on Left Hand side and all 1 on right hand side
#include<iostream>
using namespace std;
void Sort_01(int arr[],int size);
int main()
{
    int arr[100];
    int size;
   cout<<"Enter the Size of array you want to pass=>";
    
    cin>>size;
    cout<<"Enter the Array"<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Array before Sorting"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"Array After Sorting"<<endl;
    Sort_01(arr,size);

    
    
}

/*
//FIRST APPROACH(counting) T.C.=>O(n)
void Sort_01(int arr[],int size)
{
    int Zero=0;
    int One=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        Zero++;
        if(arr[i]==1)
        One++;
       else if(arr[i]!=0&&arr[i]!=1)
       {cout<<"Passed array has other element then 0 and 1";exit(1);}
    }
    while(Zero!=0)
    {
    cout<<"0 ";
    Zero--;
    }
    while(One!=0)
    {
    cout<<"1 ";
    One--;
    }

}
*/



//SECOND APPROACH(Two Pointer Approach) T.C.=>O(n) [Better then previous]
void Sort_01(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
{
   
    if(arr[start]==1&&arr[end]==0)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
       
    }
   
    if(arr[start]==0)
    {
    start++;
   
    }
    if(arr[end]==1)
    {
        end--;
       
        }
    
}
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

