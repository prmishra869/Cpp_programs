//See this codes explanation in notes and video of lecture 14 Very Important
#include<iostream>
using namespace std;
//Here we are finding squareroot of n without any floating value
int sqrt(int n)
{
    int s=0;
    int e=n;
    int mid=s+((e-s)/2);
    int ans=-1;
    while(s<=e)
    {
        if(mid*mid==n)
           return mid;
        if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
         e=mid-1;
         mid=s+((e-s)/2);
    }
    return ans;

}
//Here we are finding squareroot with floating value by taking precision as input from the user
void sqrt_with_double(int tempstore,int precision,int n)
{
    double f=1;
    double ans=tempstore;
   
    for(int i=0;i<precision;i++)
    {
        f=f/10;
        for(double j=ans;(j*j)<n;j=j+f)
        {
            ans=j;

        }

    }
    cout<<"The square root of "<<n<<" with precision "<<precision<<" is=>"<<ans;
}
int main()
{
    int n;
    cout<<"Enter the number whose square root to be find=>";
    cin>>n;
    int tempstore=sqrt(n);
    
    int precision;
    cout<<"Enter the digit upto which you want your precision=>";
    cin>>precision;
    sqrt_with_double(tempstore,precision,n);

} 