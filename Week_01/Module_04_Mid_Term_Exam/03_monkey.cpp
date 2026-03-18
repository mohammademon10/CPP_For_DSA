/*
Sample Input
monkey
i love flower

Sample Output 

ekmnoy
eefilloorvw

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000001];

    while(cin. getline(s,1000001))// EOF
    {
       int a=0,c=0;
       for (int i=0;s[i]!='\0';i++)
       {
        if(s[i]==' ')
        {
           c++;//space count
        }
        if(s[i]!='\0')
        {
            a=i;//count string length
        }  
       }

       //sorting
       sort(s,s+a+1);
       for(int j=c;s[j]!='\0';j++)
       {
        cout<< s[j];
       }
         
      cout<< endl ;
       
     
    }
   
    return 0;
}

//2nd way

#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;

    while( getline(cin,s))// EOF
    {
         // Remove spaces
       s.erase(remove(s.begin(), s.end(), ' '), s.end());

       sort(s.begin(), s.end());
   
       cout<< s <<endl;
    }
    return 0;
}