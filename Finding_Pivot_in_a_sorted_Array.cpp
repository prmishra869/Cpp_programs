
//For theory Part of this question refer to notes of Lecture 14
#include<iostream>
using namespace std;
int Pivot(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid = start+((end-start)/2);
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        end = mid;
        mid = start+((end-start)/2);
    }

    return start;//We can write here return end also you can check that in both cases start and end will point to same index by doing dry run
}
int main()
{
    int arr[5]={7,9,1,2,3};
    int size=5;
    int index;
    index=Pivot(arr,size);
    cout<<"The pivot index is "<<index<<",and corresponding number is "<<arr[index];
    return 0;
}

