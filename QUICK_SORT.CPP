#include<iostream>
using namespace std;
/*
//partition method 1
int partition(int *arr,int s,int e)
{
    //taking pivot element as starting element of array
    int pivot=arr[s];

    //counting all the elements which are smaller then the pivot elements
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        count++;
    }

    //placing pivot element at its right place i.e. s+count
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);

    //placing all smaller elements on left side of pivot and all larger element on right side of pivot
    int i=s,j=e;  //Taking indexes for acheiving the target at leftmost and rightmost element
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=arr[pivotIndex])
        i++;

        while(arr[j]>arr[pivotIndex])
        j--;

        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}
*/

//Partition method 2
int partition(int *arr,int s,int e)
{
    int pivot=arr[s];
    int i=s;
    for(int j=s+1;j<=e;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[s]);
    return i;
}

void Quick_sort(int *arr,int s,int e)
{
    //BASE CASE
    if(s>=e)
    return;

    //partition algo will return a suitable index for a pivot element jiske left me saare elements small honge and right me larger elements honge
    int p=partition(arr,s,e);

    //Sort left array
    Quick_sort(arr,s,p-1);

    //Sort right array
    Quick_sort(arr,p+1,e);
}
int main()
{
    

    int arr[7]={63,46,78,32,70,100,22};
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Array after sorting"<<endl;
   Quick_sort(arr,0,6);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    
    
}