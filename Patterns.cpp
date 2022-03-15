 /*
      //Pattern 19
#include <iostream>
using namespace std;
int main() {
int i=1;
int n;
cin>>n;
while(i<=n)
{
    int j=1;
    //Printing Space
    while(j<=n-i)
    {
        cout<<" ";
        j++;
    }
    //Printing *
    int k=i;
    while(k!=0)
    {
        cout<<"*";
        k--;
    }
    cout<<endl;
    i++;
}
return 0;
}
*/



/*
//Pattern 20
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        //Printing *
        while(j<=(n-i+1))
        {
           cout<<"*";
           j++;

        }
        //Printing space
        int k=1;
        while(k<=(i-1))
        {
            cout<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
    
}
*/


/*

//Pattern 21

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        //Printing space
        int k=1;
        while(k<=(i-1))
        {
            cout<<" ";
            k++;
        }
        //Printing *
        while(j<=(n-i+1))
        {
           cout<<"*";
           j++;

        }
        cout<<endl;
        i++;
    }
    
}
*/


/*
//Pattern 22

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    int count=1;
    while (i<=n)
    {
        int j=1;
        //Printing space
        int k=1;
        while(k<=(i-1))
        {
            cout<<" ";
            k++;
        }
        //Printing number
        while(j<=(n-i+1))
        {
           cout<<count;
           j++;

        }
        cout<<endl;
        i++;
        count++;
    }
    
}
*/

/*
//Pattern 23
#include <iostream>
using namespace std;
int main() {
int i=1;
int n;
cin>>n;
int count=1;
while(i<=n)
{
    int j=1;
    //Printing Space
    while(j<=n-i)
    {
        cout<<" ";
        j++;
    }
    //Printing number
    int k=i;
    while(k!=0)
    {
        cout<<count;
        k--;
    }
    cout<<endl;
    i++;
    count++;
}
return 0;
}

*/

/*

//Pattern 24

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        int count=i;
        //Printing space
        int k=1;
        while(k<=(i-1))
        {
            cout<<" ";
            k++;
        }
        //Printing number
        while(j<=(n-i+1))
        {
           cout<<count;
           j++;
           count++;
        }
        cout<<endl;
        i++;
    }
    
}
*/

/*
//Pattern 25
#include <iostream>
using namespace std;
int main() {
int i=1;
int n;
cin>>n;
int count=1;
while(i<=n)
{
    int j=1;
    //Printing Space
    while(j<=n-i)
    {
        cout<<" ";
        j++;
    }
    //Printing number
    int k=i;
    while(k!=0)
    {
        cout<<count;
        k--;
        count++;
    }
    cout<<endl;
    i++;
}
return 0;
}
*/

/*
//Pattern 26
#include <iostream>
using namespace std;
int main() {
int i=1;
int n;
cin>>n;
while(i<=n)
{
    int j=1;
    int count=1;
    //Printing Space
    while(j<=n-i)
    {
        cout<<" ";
        j++;
    }
    //Printing number
    int k=i;
    while(k!=0)
    {
        cout<<count;
        count++;
        k--;
    }
    //Printing Second Number set
    int s=1;
    int cc=i-1;
    while(s<=(i-1))
    {
        cout<<cc;
        cc--;
        s++;
    }
    cout<<endl;
    i++;
}
return 0;
}
*/



//Pattern 27

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
       int count=1;
        //Printing number
        while(j<=(n-i+1))
        {
           cout<<count;
           count++;
           j++;

        }
        //Printing *
        int k=1;
        while(k<=(i-1))
        {
            cout<<"*";
            k++;
        }

        //printing Second Set of Number
        
        int cccc=n-i+1;
        j=1;
        //Printing space
        k=1;
        while(k<=(i-1))
        {
            cout<<"*";
            k++;
        }
        //Printing *
        while(j<=(n-i+1))
        {
           cout<<cccc;
           j++;
           cccc--;

        }
        cout<<endl;
        i++;
        
    }
        
    
    
}
