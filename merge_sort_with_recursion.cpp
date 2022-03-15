#include<iostream>
using namespace std;
//Approach 1 where we use new arrays and copy values
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    //size for new arrays
    int size1=mid-s+1;
    int size2 =e-mid;
    //2 new array declared
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    //temp is the index for main array where we want to store the sorted elements
    int temp=s;
    //copy value in the first array
    for(int i=0;i<size1;i++)
    {
        arr1[i]=arr[temp++];
    }
    //Copy value in second array
    temp=mid+1;
        for(int i=0;i<size2;i++)
    {
        arr2[i]=arr[temp++];
    }
    //merging 2 sorted arrays
    int index1=0;//temporary index for arr1
    int index2=0;//temporary index for arr2
    temp=s;
    while(index1<size1 && index2<size2)//In this case we have to compare the array element and place it accordingly in the main array
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[temp++]=arr1[index1++];
        }
        else
         arr[temp++]=arr2[index2++];
    }
    while(index1<size1)//Leftover arr1 will be simply put down in the main array
    {
        arr[temp++]=arr1[index1++];
    }
    while(index2<size2)//Leftover arr2 will be simply put down in the main array
    {
        arr[temp++]=arr2[index2++];
    }
    delete []arr1; //Deleting the memory we have allocated to array 1
    delete []arr2; //Deleting the memory we have allocated to array 2
}
void merge_Sort(int *arr,int s,int e)
{
    //BASE CASE
    if(s>=e)
    return;

    int mid=s+(e-s)/2;

    //left part sort karna hai
    merge_Sort(arr,s,mid);

    //right part sort karna hai
    merge_Sort(arr,mid+1,e);

    //merge kar dena hai
    merge(arr,s,e);


}
int main()
{
    int arr[7]={63,46,78,32,70,100,22};
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Array after sorting"<<endl;
    merge_Sort(arr,0,6);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
}