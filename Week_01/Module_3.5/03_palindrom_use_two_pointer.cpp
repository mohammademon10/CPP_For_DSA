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

    // Check if the array is a palindrome
    int isPalindrome = 1;//true

    for (int i = 0; i < n/2; i++) 
    {
        if (a[i] != a[n - i - 1]) {
            isPalindrome = 0;  // If any pair is not equal, it's not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else 
     {
        cout << "NO" << endl;
     }
   
    
    return 0;
}