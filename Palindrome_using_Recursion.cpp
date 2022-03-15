#include<iostream>
using namespace std;
bool isPalindrome(string &str,int i,int j)
{
    //BASE CASE
    if(i>j)
    return true;

    //Condition
    if(str[i]==str[j])
    {
        i++;
        j--;
        isPalindrome(str,i,j);
    }
    else
    return false;
}
int main()
{
    string str1="abcba",str2="abccba",str3="abcda";
    bool pal1=isPalindrome(str1,0,str1.size()-1);
    bool pal2=isPalindrome(str2,0,str2.size()-1);
    bool pal3=isPalindrome(str3,0,str3.size()-1);
   
    cout<<"String 1 is Palindrome=>"<<pal1<<" (1 is for true 0 for false)"<<endl;
    cout<<"String 2 is Palindrome=>"<<pal2<<" (1 is for true 0 for false)"<<endl;
    cout<<"String 3 is Palindrome=>"<<pal3<<" (1 is for true 0 for false)"<<endl;

    return 0;
}
