#include<bits/stdc++.h>
using namespace std;
void print(stringstream & aa)//recursion use
{
    string word;
    if(aa>>word)
    {
         print(aa);//output word ->reverse 
        cout<<word<<endl;
        // print(aa);//output word ->input
       
    }

}
int main()
{ 
    string s;
    getline(cin,s);

    //stringstream ss(s);
    stringstream ss;
    ss<<s;

    print(ss);

   
    return 0;
}