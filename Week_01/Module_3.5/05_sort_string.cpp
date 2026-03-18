#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the size of the array
    char s[n];  // Now `n` is initialized, so we can use it to declare `s`.

    // Input the characters
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];  
    }

    // Sort the character array
    sort(s, s + n);

    // Output the sorted characters
    for (int i = 0; i < n; i++) 
    {
        cout << s[i];
    }

    return 0;
}


//2nd waye

#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    cin >> n;  
    char s[n]; 

   
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];
    }

    // Implementing Bubble Sort to sort the characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (s[j] > s[j + 1])
             {
                
                swap(s[j], s[j + 1]);// Swap characters
            }
        }
    }

    // Output the sorted characters
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}
