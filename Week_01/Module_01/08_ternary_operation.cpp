/*
The ternary operator, also known as the conditional operator, 
is a shorthand way to write a simple if-else statement in C++ |
codition:
only if else holle use korbo.

condition ? expression_if_true : expression_if_false
*/

#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    
    (x%2==0)?   cout << "Even" << endl : cout << "Odd" << endl;

    
   /*
   if(x%2 == 0)
    {
        cout<<"Even\n";
    }
    else
    {
      cout<<"odd"<<endl;
    }
    */

    return 0;

}