#include<iostream>
using namespace std;
int Row_Sum(int arr[][4],int i,int j)
{
   
    int sum=0;
        for(int m=0;m<j;m++)
          sum=sum+arr[i][m];
    
    return sum;
}
int Column_Sum(int arr[][4],int i,int j)
{
   
    int sum=0;
        for(int m=0;m<i;m++)
          sum=sum+arr[m][j];
    
    return sum;
}
int main()
{
    int arr[3][4]={{1,2,3,4},{33,44,23,31},{56,67,89,90}};
    int maxcol=0;
    int maxrow=0;
    for(int i=0;i<3;i++)
    {
        int temp=Row_Sum(arr,i,4);
         if(temp>maxrow)
         maxrow=temp;
        cout<<"Sum of row no."<<i+1<<" is "<<temp<<endl;
    }
    cout<<endl;
     for(int j=0;j<4;j++)
    {
        int temp=Column_Sum(arr,3,j);
        if(temp>maxcol)
         maxcol=temp;
        cout<<"Sum of column no."<<j+1<<" is "<<temp<<endl;
    }
    cout<<endl<<"maximum sum of row is "<<maxrow<<endl;
    cout<<"maximum sum of columnn is "<<maxcol;
    return 0;

}
