#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int x=10;//static memory create

    //intiger type dynamic memory create
    int *a = new int;//struct node* a=(struct node*)malloc(sizeof(struct node));//for "c"
    *a=10;//dereference

    cout<<*a<<endl;//dereference for value
    cout<<a<<endl; //memory adress

    //float type dynamic memory create
      float *b = new float;
    *b=5.0236;

    cout<<*b<<endl;//dereference for value
    cout<<b<<endl;//memory adress
    
    return 0;
}