#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;//(*this).name=name;
        this->age=age;
    }

    void hello()
    {
        cout<<"I am  emon"<<endl;

    }
};

int main()
{
    person emon("Md. Emon Hossain",23);
    cout<<"Name: "<<emon.name<<endl;
    cout<<"Age: "<<emon.age<<endl; 

    emon.hello();
   
    
    return 0;
}