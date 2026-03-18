#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int r, int c, double g)
    {
        roll=r;
        cls=c;
        gpa=g;

    }

};

int main()
{
    student emon(18,12,4.95);
    student emran(45,10,4.33);

    cout<<emon.roll<<endl;
    cout<<emon.cls<<endl;
    cout<<emon.gpa<<endl;


    cout<<emran.roll<<endl;
    cout<<emran.cls<<endl;
    cout<<emran.gpa<<endl;

     
    return 0;
}


// dereference kore korle

#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
       this-> roll=roll;//*(this).roll=roll;
       this-> cls=cls;
       this-> gpa=gpa;

    }

};

int main()
{
    student emon(18,12,5.01);
    student emran(45,10,4.33);

    cout<<emon.roll<<endl;
    cout<<emon.cls<<endl;
    cout<<emon.gpa<<endl;


    cout<<emran.roll<<endl;
    cout<<emran.cls<<endl;
    cout<<emran.gpa<<endl;

     
    return 0;
}