#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    // cin.ignore();

    getchar();//integer then string input getline use take input then use getchar but without space string not problem

    string s;
    // cin>>s;
    // cin.getline(s,100); char s[100];
    getline(cin,s);//string input with space

    cout<<x<<endl;
    cout<<s<<endl;

    return 0;
}