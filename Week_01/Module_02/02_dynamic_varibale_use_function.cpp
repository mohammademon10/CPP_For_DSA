#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    cout<<"fun: "<< a << endl;//a er value & a value dynamic memory addres
    *a= 100;
    return a;
}
int main()
{
   int *p =fun();
   cout << "main: " << p <<endl;//p er value & p er modhe a er address
   cout << "main: " << *p <<endl;//value

    return 0;
}