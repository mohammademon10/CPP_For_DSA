#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;//HELLO

    cout<<s[0]<<endl;//first index == H
    cout<<s.at(0)<<endl;//H
    cout<<s.front()<<endl;//H

    cout<<s[s.size()-1]<<endl;//last index ==O 
    cout<<s.back()<<endl;//last index
    

    //so we are used
     cout<<s[0]<<endl;//first index 
     cout<<s.back()<<endl;//last index

 

    return 0;
}