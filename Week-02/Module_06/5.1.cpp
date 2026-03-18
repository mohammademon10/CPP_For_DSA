#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void hello()//1st working
        {
            cout<<name<< " " <<age<<endl;
        }
        int total_marks()//2nd working
        {
            return marks1+marks2;
        }
};
int main()
{
    Person rakib("Rakib Ahsan",24,95,85);

    rakib.hello();//1st working

    cout<<rakib.total_marks()<<endl;//2nd working

    return 0;
}