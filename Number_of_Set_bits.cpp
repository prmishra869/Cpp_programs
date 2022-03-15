//Here we have to print number of set bits(i.e. number of bit with value 1)in given 2 numbers a and b
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    while(a!=0)
    {
        if(a&1)
        count++;
        else{}
        a=a>>1;
    }
    while(b!=0)
    {
        if(b&1)
        count++;
        else{}
        b=b>>1;
    }
    cout<<count;
}