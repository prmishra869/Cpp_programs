#include<iostream>
using namespace std;
int ArrSum(int arr[],int size)
{
    //Base Case
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    //Recurrance relation
    int sum=arr[0]+ArrSum(arr+1,size-1);
    return sum;
}
int main()
{
    int arr[6]={2,3,4,10,10,13};
    int ans=ArrSum(arr,6);
    cout<<"The Sum of Array is=>"<<ans;
    return 0;
}