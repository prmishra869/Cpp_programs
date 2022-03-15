#include<iostream>
using namespace std;
void reverse_string(string &str,int i,int j)
{
    //BASE CASE
    if(i>j)
    return ;

    //CONDITION
    swap(str[i],str[j]);
    i++;
    j--;

    //RECURSIVE CALL
    reverse_string(str,i,j);
}
int main()
{
    string str="hi there";
    int i=0;
    int j=str.size()-1;
    reverse_string(str,i,j);
   
    cout<<str;
    return 0;
}