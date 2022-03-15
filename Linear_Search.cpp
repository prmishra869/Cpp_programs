#include<iostream>
#include<string>
using namespace std;

bool Linear_Search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
bool Linear_Search_with_Recursion(int arr[],int size,int key)
{
    //base case
    if(size==0)
    return 0;


    if(arr[0]==key)
    return 1;
    else
    {
    bool k=Linear_Search_with_Recursion(arr+1,size-1,key);
    return k;
    }
}
int main()
{
    int arr[10]={23,-2,34,4,32,100,322,45,90,10};
    int size=10;
    int key;
    cout<<"Enter the element to be searched=>";
    cin>>key;
  // bool found=Linear_Search(arr,size,key);//Linear Search using Simple for Loop
   bool found=Linear_Search_with_Recursion(arr,size,key);//Linear Search with Recursion
    if(found)
    cout<<endl<<key<<" is Present in given Array";
    else
     cout<<endl<<key<<" is not Present in given Array";

}

