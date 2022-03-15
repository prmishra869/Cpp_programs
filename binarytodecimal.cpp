#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int bin;
    cin>>bin;
    int count=0;
    long int num=0;
    
    while(bin!=0)
    {
        int temp=bin%10;
        if(temp==1)
        {
            num=pow(2,count)+num;
            count++;
        }
        else if(temp==0)
        {
            count++;
        }
        else
        {
            cout<<"Not a Binary number";
            exit(1);
        }
        bin=bin/10;

    }
    cout<<num;

}

