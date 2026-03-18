#include<iostream>

using namespace std;
void my_swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
int main()
{
    int a,b;
    cin >> a >> b;

   my_swap(&a,&b);

   cout << "a = " << a << endl; 
   cout << "b = " << b << endl;

  return 0;
}