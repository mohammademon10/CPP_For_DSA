/*using function & pointer
Sample Input 
5
1 4 2 3 5
Sample Output 

5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *a=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

     sort(a, a + n, greater<int>()); //descendingorder
     
    return a;

}

int main()
{

    int n;
    cin>>n;
    
 int *a  = sort_it(n);

 for (int i = 0; i < n; i++) 
  {
    cout <<a[i] << " ";
  }
  
    return 0;
}