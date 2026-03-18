#include<iostream>
#include<string>
#include<string.h>//size of string
using namespace std;
int main()
{
   
    char s[100];
    int a;

    cin>>a;
    getchar();

    //cin>>s;//without speach input
    
   // fgets(s ,1000 ,stdin);//use c
   cin.getline(s, 100);//with speach sting input


    cout << a << endl;
    cout << s << endl;
    cout << strlen(s) << endl;
    
    
    return 0;
}