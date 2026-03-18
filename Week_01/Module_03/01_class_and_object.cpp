#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    char name[100];
    int roll;
    double cgpa;

};

int main()
{
     student s1,s2,s3;//object

    //s1 data input
    //s1.name='emon';//ebabe kora jaie nah//input direct string neoa jaie
    char temp[100]="Md.Emon Hossain";
    strcpy(s1.name, temp);
    s1.roll=818;
    s1.cgpa=3.85;


    //s2 data input
    cout<<"Student Two Information Input:" <<endl;

    cout<<"Name:" ;
    cin>>s2.name;//without space

    //cin.getline(s2.name,100);//with space
   //also use getchar(); function
   
    cout<<"Roll:" ;
    cin>>s2.roll;
    cout<<"CGPA:" ;
    cin>>s2.cgpa;



    //s1 data output
    cout<<"Student One Information:" <<endl; 
    cout<< "Name: "<< s1.name << endl;
    cout<<"Roll: "<<  s1.roll << endl;
    cout<<"CGPA: "<<  s1.cgpa << endl;


    //s2 data output
    cout<<endl<<"Student Two Information:" <<endl;
    
    cout<< "Name: "<< s2.name << endl << "Roll: "<< s2.roll << endl<<"CGPA: "<<  s2.cgpa << endl;



   
    
    return 0;
}