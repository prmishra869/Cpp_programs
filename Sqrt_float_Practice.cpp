#include<iostream>
#include<math.h>
using namespace std;
int sqrt(int n)
{
    int s=0;
    int e=n;
    long long int ans=0;
    while(s<=e)
    {
        long long int mid=s+((e-s)/2);
        long long int temp=mid*mid ;
        if(temp==n)
        {
            return mid;
        }
        if(temp>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
void sqrt_with_double(int t,int p,int n)
{
    float temp=t;
    float ans;
    for(int i=0;i<=p;i++)
    {
       // int k=0;
        float a=1/(pow(10,i+1));
         temp=temp+a;
        while((temp*temp)<n)
        {
            ans=temp;
           // k++;
            temp=temp+a;
             
        }
    }
   cout<<ans;

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
    return 0;

} 