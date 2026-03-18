#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

   int c=min(a,b);
   int d=max(a,b);

   cout << "minimum value is:" << c << endl; 
   cout << "maximum value is:" << d << endl;

  return 0;
}