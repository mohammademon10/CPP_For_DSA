//iterator another name is pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;//Hello

    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }


    // cout<<*s.begin()<<endl; -> H
    // cout<<*(s.end())<<endl; -> Null
    // cout<<*(s.end()-1)<<endl; -> o

    for(auto it=s.begin();it<s.end();it++)//auto==string::iterator(g++17 compailer use for auto use)
    {
        cout<<*it<<endl;
    }

    return 0;
}