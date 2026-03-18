#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()

{
    double a,b;
    cin >> a>>b;

   // printf("%0.2lf\n",a);
   //cout<< a <<endl;
   
   // Set precision to 2 decimal places and use fixed notation
   cout << fixed << setprecision (2) ;
   cout<<a<<endl;
   cout << fixed << setprecision (3) ;
   cout<<b<<endl;
   return 0;
    
}