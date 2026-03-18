/*EOF stands for End Of File. 
It is a special marker or indicator used to signify the end of a 
file or input stream in computing.

*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b)//while(scanf("%d %d",&a,&b) != EOF)
    {
        cout<<a <<" " << b << endl;//printf("%d %d",a,b);
    }
    return 0;
}