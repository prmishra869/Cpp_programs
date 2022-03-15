//Input 412
//output Four One Two

#include<iostream>

using namespace std;
void SayDigit(int n,string arr[])
{
    //Base Case
    if(n==0)
    return;
    
    int k=n%10;//Taking the last digit
     
    SayDigit(n/10,arr);
   
   cout<<arr[k]<<" ";//This print must be after Recursive relation otherwise reverse order will get printed

}
int main()
{
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter the Number=>";
    cin>>n;
    SayDigit(n,arr);
    return 0;
}