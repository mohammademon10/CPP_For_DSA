#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];//dynamiic memmory
    int *b = new int[3];

for(int i=0;i<3;i++)
{
    cin>>a[i];
    b[i]=a[i];
}

delete[] a;// delete the dynamically allocated memory

a = new int[5];

for(int i=0;i<3;i++)
{
     a[i]=b[i];
}

delete[] b;

//cin>>a[3]>>a[4];
a[3]=40;
a[4]=50;

for(int i=0;i<5;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}