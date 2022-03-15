#include<iostream>
using namespace std;

string reverse(string temp,int s,int e)
{
    while(s<e)
    {
        swap(temp[s++],temp[e--]);
    }
    return temp;
}
string reverseString(string str)
{
    // Write your code here.
    string temp;
    
    //faltu ka space hatana hai
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=(char)32)
        {
           
            temp.push_back(str[i]);
            if(str[i+1]==(char)32)
                temp.push_back(' ');
        }
        
     }
     //reverse karna hai and last me ek extra space daalna hai jisse execution proper ho paaye
    temp=reverse(temp,0,temp.size()-1);
    temp.push_back(' ');
   
    
    int s=0;
    int end;
 // Reverse kar rahe hain Individual string ko
    for(int i=0;i<temp.size();i++)
        if(temp[i]==' ')
        {
            end = i;
            temp=reverse(temp,s,end);
           
            s=end+1;
        }
        temp.erase(0,1);
       
       
    return temp;
}


int main()
{
    string s;
    getline(cin,s);
    s=reverseString(s);
    
for(int i=0;i<s.size();i++)
    {
       cout<<s[i];
    }
    
    return 0;
}

#include<math.h>
int main()
{
    int n;
    
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num=i;
       
        int ans=0;
        int j=0;
        while(num!=0)
        {
            int bit=num&1;
            ans=bit*pow(10,j)+ans;
            j++;
            num=num>>1;
        }
        cout<<ans<<" ";
    
    }

   
}