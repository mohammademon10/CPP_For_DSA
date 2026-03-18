/*
Sample Input 
5
2 4 6 1 3
Sample Output 
1 2 3 4 6
6 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);//ascending order

  for (int i = 0; i < n; i++) 
  {
    cout << a[i] << " ";
  }

  cout<<endl;

  for (int i = n-1; i >=0 ; i--) 
  {
    cout << a[i] << " ";
  }
  
    return 0;
}