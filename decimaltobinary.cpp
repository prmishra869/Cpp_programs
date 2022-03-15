
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
 int main()
{
    system("CLS");
    int n;
    cin>>n;
    system("CLS");//This command is used for clearing output screen
    int ans=0;
    int i=0;
    cout<<n<<"=>";
    //For Positive Number
    if(n>=0)
    {
    while(n!=0)
    {
        
        int bit= n&1;
        ans=bit*pow(10,i)+ans;
        i++;
        n=n>>1;
    }
    cout<<ans;
    }
    //For Negative Number there is some error
    else
    {
        int temp=n-(2*n);
        
        while(temp!=0)
        {
            int bit= temp&1;
            if(bit==1)
            bit=0;
            else
            bit=1;
            ans=bit*pow(10,i)+ans;
            
            i++;
            temp=temp>>1;
        }
        cout<<ans;
    }

    return 0;
}


