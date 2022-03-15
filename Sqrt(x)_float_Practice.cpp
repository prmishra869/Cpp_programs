#include<iostream>
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
/*int sqrt_with_double(int t,int p,int n)
{

}
*/



int main()
{
    int n;
    cout<<"Enter the number whose square root to be find=>";
     cout<<"hi";
    cin>>n;
    int tempstore=sqrt(n);
    cout<<"hi"<<tempstore;
    /*int precision;
    cout<<"Enter the digit upto which you want your precision=>";
    cin>>precision;
    sqrt_with_double(tempstore,precision,n);*/
    return 0;

} 