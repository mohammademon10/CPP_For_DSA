#include<bits/stdc++.h>
using namespace std;
int main()
{
    //two string sum*****
     string a="Hello";
     string b="A";
     a+=b;//manually use
     a.append(b);//use function for sum but don't use
     cout<<a<<endl;//HelloA
     cout<<b<<endl;//A

    //insert string --> last****
    //a="HelloA"; -> works
    // a=a+"A"; -> works
    // a=a+b; -> works
    // a[5]='A'; -> didn't work
    // a.push_back('A'); // works
    // a.pop_back();//last index value delete
    // a.pop_back();//last index er agger index delete
    // cout<<a<<endl;

    // a="Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;


    string s1="HelloWorld";
    s1.erase(4,3);//1st perameter -->delete after index & 2nd perameter ->after how many index delete
    //s1.replace(5,0,"so");
    // s1.insert(5,"Rahat");
    cout<<s1<<endl;
    
    return 0;
}