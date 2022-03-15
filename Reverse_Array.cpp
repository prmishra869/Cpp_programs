
#include<iostream>
using namespace std;
void swap_array(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<=end)
    {
    swap(arr[start],arr[end]);
    
    start++;
    end--;
    }

}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the Size of Array you want to give=>";
    cin>>size;
    cout<<"Enter the Elements"<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];

    swap_array(arr,size);
    cout<<"Swapped Array is"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;

}
