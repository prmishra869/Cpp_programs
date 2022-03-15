#include<iostream>
using namespace std;
 
void MAX(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"MAXIMUM ELEMENT=>"<<max<<endl;

}
void MIN(int arr[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"MINIMUM ELEMENT=>"<<min<<endl;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];//Taking arr[size] is not a good practice So we must write a number instead
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    MAX(arr,size);
    MIN(arr,size);
}

