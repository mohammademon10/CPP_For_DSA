#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(cin,s);

   stringstream ss(s);
   //ss<<s;

   string word; 
   int count=0;
   while(ss>>word)
   {
     if(word=="Jessica")
     {
       count=1; 
     } 

   }

    if(count==0)
    {
        cout<<"NO"<<endl;
    }
   
    else
    {
        cout<<"YES"<<endl;
    }


    
    return 0;
}