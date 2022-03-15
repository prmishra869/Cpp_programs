//Here we have to swap Alternate numbers given in an Array


#include<iostream>
using namespace std;



                        //FIRST METHOD
/*
void Alternate_swap(int arr[],int size)
{
    int start=0,end=1;
    if(size==0) //No elements in the Array
    cout<<"Array must have atleast one element";
    if(size%2==0) //Even number of elements in the array
    {
        while(end!=(size+1))
        {
            swap(arr[start],arr[end]);
            start=start+2;
            end=end+2;
        }

    }
    else   //odd number of elements in the array
    {
        while(start!=(size-1))
        {
            swap(arr[start],arr[end]);
            start=start+2;
            end=end+2;
        }

    }
    
}
*/

                     //SECOND METHOD

void Alternate_swap(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        swap(arr[i],arr[i+1]);
    }
}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter the size of array=>";
    cin>>size;
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Alternate_swap(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


