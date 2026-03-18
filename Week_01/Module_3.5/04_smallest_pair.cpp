/*
Input
1
4
20 1 9 4
Output
7
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
    
        int val, mn_value;
    
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                val = a[i] + a[j] + (j - i);
                mn_value = min(mn_value, val);
            }
        }
        
        cout << mn_value << endl;
    }
    
    return 0;
}
