#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
    string s,x;
    cin >> s >> x;
    int size=x.size();

    while(s.find(x) != -1)
    {
      /*int t=s.find(x);
      s.erase(t,size);
      s.replace(t,0,"#");*/
      s.replace(s.find(x),x.size(),"#");

    } 

     cout<<s<<endl;

   }

    return 0;
}