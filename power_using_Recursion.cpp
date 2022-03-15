#include<iostream>
using namespace std;
/*
//FIRST APPROACH (NOT OPTIMIZED) for 2^10 10 iteration will be required
int power(int a,int b)
{
    if(b==0)
    return 1;

    b--;
    int ans=a*power(a,b);
    return ans;
}
*/
//SECOND APPROACH(OPTIMIZED) //for 2^10 5 iteration will be required
int power(int a,int b)
{
    //BASE CASES
    if(b==0)
    return 1;

    if(b==1)
    return a;

    //RECURSIVE CONDITION
    int ans=power(a,b/2);
    if(b%2==0)//IF b is even
    {
        return ans*ans;
    }
    else //if b is odd
    return a*ans*ans;

}
int main()
{
    int a=2;
    int b=10;
    int c=power(a,b);
    cout<<c;
    return 0;
}