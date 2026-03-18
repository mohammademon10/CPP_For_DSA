//character to value
#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter the Charecter: ";
   cin >> c;//input

   int ascii=c;

   cout << ascii <<endl;//print
   
    return 0;
}

//value to character
#include<iostream>
using namespace std;
int main()
{
   int c;
   cout<<"Enter the Charecter: ";
   cin >> c;//input

   char ascii=c;

   cout << ascii <<endl;//print
   
    return 0;
}

//2nd way
#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter the Charecter: ";
   cin >> c;//input

   cout<< int(c) <<endl;//type casting

    return 0;
}