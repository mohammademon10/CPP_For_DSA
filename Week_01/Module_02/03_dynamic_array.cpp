#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    //int a[n];//static memory
    int* a = new int[n];//dynamic memory

    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    delete[] a; // release the dynamically allocated memory

    return 0;
}