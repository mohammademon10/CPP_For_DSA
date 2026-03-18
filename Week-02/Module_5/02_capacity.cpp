#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "Hello World";

   cout<< s.size() <<endl;

   cout<<s.max_size()<<endl;

   cout<<s.capacity()<<endl;//dynamicaly incrised 

   //clear() string
    string s1="Emon";
    cout<<s<<endl;//Emon
    s1.clear();
    cout<<s1<<endl;//empty
    cout<<s.size()<<endl;//0

    //empty()
    string s2="sanjida";
    if(s2.empty()==true)//true & false is a data type.true=1 & false=0;
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

    //resize()
    string s3="Hello_World";
    //cin>>s3;//Hello_world
    s3.resize(5);
    cout<<s3.size()<<endl;
    cout<<s3<<endl;
    
    s3.resize(20,'X');
    cout<<s3<<endl;




    
    return 0;
}