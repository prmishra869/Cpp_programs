#include<iostream>
using namespace std;
void BubbleSort(int* arr,int n)
{
    //Base case already sorted array
    if(n==0||n==1)
    return;

    //1 element ko last tak pahucha do baaki recursion sambhaal lega
    for(int i=0;i<n-1;i++)
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);

    //Recursion Condition
    BubbleSort(arr,n-1);
}
int main()
{
    int arr[7]={78,45,56,90,100,33,69};
    cout<<"Array Before Sorting"<<endl;
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Array After Sorting"<<endl;
    BubbleSort(arr,7);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    return 0;
}