#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
      string name;
      int age;
      person(string name,int age)
    {
        this->name=name;
        this->age=age;

    }
};
int main()
{
   person *emon =new person("MD EMON HOSSAIN",22);
   person *sanjida =new person("SANJIDA ALI",20);

//copy  object
//emon=sanjida
//emon->name=sanjida->name
//emon->age=sanjida->age

*emon=*sanjida;//dynamically copy korte bolle ebabe korbo

delete sanjida;

cout<<emon->name<<" "<<emon->age<<endl;

    return 0;
}