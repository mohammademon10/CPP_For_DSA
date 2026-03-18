#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

   int mn=min({a,b,c,d});
   int mx=max({a,b,c,d});

   cout << "minimum value is: " << mn << endl; 
   cout << "maximum value is: " << mx << endl;

  return 0;
}