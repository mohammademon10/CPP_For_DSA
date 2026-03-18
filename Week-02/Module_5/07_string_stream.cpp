#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;//s ->ss er modhe string ta dukbe

    string word;

    int count=0;
    while(ss >> word)
    {
        
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    /*while(ss >> word)//ss->word theka word er dike akta kore word jabbe
    {
        count++;
    }
    cout<<count<<endl;*/
    
    return 0;
}