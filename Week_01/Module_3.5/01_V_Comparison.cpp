#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a,b;
    cin >> a >> s >> b;
    int result=0;

    if(s=='<')
    {
        result=a<b;
    }
    else if(s=='>')
    {
        result = a>b;
    }
    else if(s=='=')
    {
        result= a==b;
    }

    // Print output
    if (result==1) 
    {
        cout << "Right" << endl;
    } 
    else
    {
        cout << "Wrong" << endl;
    }
   
    
    return 0;
}