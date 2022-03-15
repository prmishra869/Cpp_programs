//Here we have to count number of notes required of amount 100 50 20 and 1 rs to given input.
//WE HAVE TO USE SWITCH FUNCTION AS GIVEN IN QUESTION


#include<iostream>
using namespace std;
int main()
{
    int hun=0,fif=0,twe=0,one=0;
    int amount;
    cout<<"Enter the Amount=>";
    cin>>amount;
    switch(100)
    {
        case 100:
        hun=amount/100;
        amount=amount-(hun*100);
        fif=amount/50;
        amount=amount-(fif*50);
        twe=amount/20;
        amount=amount-(twe*20);
        one=amount;
        break;

        default:cout<<endl<<"Invalid Input";

    }
    cout<<endl<<"NUMBER OF 100 rs NOTES REQUIRED=>"<<hun;
    cout<<endl<<"NUMBER OF 50 rs NOTES REQUIRED=>"<<fif;
    cout<<endl<<"NUMBER OF 20 rs NOTES REQUIRED=>"<<twe;
    cout<<endl<<"NUMBER OF 1 rs NOTES REQUIRED=>"<<one;

}
