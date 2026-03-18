#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;

    long long int sum = x + y;
    long long int product = x * y;
    long long int difference = x - y;

    cout<< x << " " << "+"<< " " << y << " " << "=" <<" " << sum << endl;
    cout<< x << " " << "*"<< " " << y << " " << "=" <<" " << product << endl;
    cout<< x << " " << "-"<< " " << y << " " << "=" <<" " << difference << endl;

    
    return 0;
}