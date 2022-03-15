
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*fact(n-1);
}
void nCr(int n,int r)
{
    int ans=(fact(n)/(fact(r)*fact(n-r)));
    cout<<ans;
    return; //Here Return is not needed but we can write it in void returned function just for showing the flow of program.
}

int main()
{
  int n,r;
  cin>>n>>r;
  if(n>=r)
  nCr(n,r);
  else
  cout<<"Pass Correct Parameters";
  
  return 0;
}
